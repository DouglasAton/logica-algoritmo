#include <stdio.h>

int main() {
    int N, maioridade, posicaoMaior;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    char nomes[N][50];
    int idades[N];

    for (int i = 0; i < N; i++) {
		printf("Dados da %da pessoa:\n", i + 1);
		printf("Nome: ");
		scanf("%s", &nomes[i][0]);
		printf("Idade: ");
		scanf("%d", &idades[i]);
    }

    maioridade = idades[0];
    posicaoMaior = 0;

    for (int i = 1; i < N; i++) {
        if (idades[i] > maioridade) {
            maioridade = idades[i];
            posicaoMaior = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s\n", nomes[posicaoMaior]);

    return 0;
}
