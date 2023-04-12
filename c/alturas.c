#include <stdio.h>

int main() {

    int N, nMenores;
    double soma, media, percentualMenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nomes[N][50];
    int idades[N];
    double alturas[N];

    for (int i = 0; i < N; i++) {
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for (int i = 0; i < N; i++) {
        soma = soma + alturas[i];
    }
    media = soma / N;
    printf("\nAltura media: %.2llf\n", media);

    nMenores = 0;
    for (int i = 0; i < N; i++) {
        if (idades[i] < 16) {
            nMenores++;
        }
    }
    percentualMenores = nMenores * 100.0 / N;
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualMenores);

    for (int i = 0; i < N; i++) {
        if (idades[i] < 16) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
