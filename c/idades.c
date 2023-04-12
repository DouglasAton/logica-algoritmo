#include <stdio.h>

int main(){

    char nome1[50], nome2[50];
    int idade1, idade2;
    double mediaIdade;


    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    mediaIdade = (double)(idade1 + idade2) / 2.0;

    printf("A idade media de %s e %s e de %.1lf anos\n", nome1, nome2, mediaIdade);

    return 0;
}
