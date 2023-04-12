#include <stdio.h>

int main() {

    int N, posmaior;
    double maior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    maior = vet[0];
    posmaior = 0;

    for (int i = 1; i < N; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            posmaior = i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", maior);
	printf("POSICAO DO MAIOR VALOR = %d\n", posmaior);

    return 0;
}
