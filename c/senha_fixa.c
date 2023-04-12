#include <stdio.h>

int main() {

    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 2312) {
        printf("Senha Invalida! Tente novamente: ");
        scanf("%d", &senha);
    }

    if (senha == 2312) {
        printf("Acesso permitido!\n");
    }

    return 0;
}
