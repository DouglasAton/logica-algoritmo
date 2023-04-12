#include <stdio.h>

int main() {

    int N, somapares = 0, npares = 0;
    double mediapares;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    int vet[N];

    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < N; i++) {
        if (vet[i] % 2 == 0) {
            somapares = somapares + vet[i];
            npares++;
        }
    }

    if (npares == 0) {
        printf("NENHUM NUMERO PAR\n");
    }
    else {
        mediapares = (double)somapares / npares;

        printf("MEDIA DOS PARES = %.1lf\n", mediapares);
    }

    return 0;
}
