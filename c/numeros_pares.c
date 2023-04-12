#include <stdio.h>

int main() {

    int N, qtdpares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vet[N];

    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS PARES:\n");

	qtdpares = 0;
    for (int i = 0; i < N; i++) {
        if (vet[i] % 2 == 0) {
            printf("%d  ", vet[i]);
            qtdpares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d\n", qtdpares);

    return 0;
}
