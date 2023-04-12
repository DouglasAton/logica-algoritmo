#include <stdio.h>

int main() {

    int N, x, fora, dentro;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

	fora = 0;
	dentro = 0;

    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &x);

        if (x < 10 || x > 20) {
            fora++;
        }
        else {
            dentro++;
        }
    }

	printf("%d DENTRO\n", dentro);
	printf("%d FORA\n", fora);

    return 0;
}
