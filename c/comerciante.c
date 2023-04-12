#include <stdio.h>

int main() {

    int N, abaixo, entre, acima;
    double totalCompra, totalVenda, lucroTotal;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);

    char nomes[N][50];
    double precoCompra[N], precoVenda[N], percentualLucro[N];

    for (int i = 0; i < N; i++) {
		printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", &nomes[i][0]);
        printf("Preco de compra: ");
        scanf("%lf", &precoCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precoVenda[i]);
     }

    for (int i = 0; i < N; i++) {
        percentualLucro[i] = (precoVenda[i] - precoCompra[i]) / precoCompra[i] * 100.0;
    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for (int i = 0; i < N; i++) {
        if (percentualLucro[i] < 10.0) {
            abaixo++;
        }
        else if (percentualLucro[i] < 20.0) {
            entre++;
        }
        else {
            acima++;
        }
    }

    totalCompra = 0;
    totalVenda = 0;

    for (int i = 0; i < N; i++) {
        totalCompra = totalCompra + precoCompra[i];
        totalVenda = totalVenda + precoVenda[i];
    }

    lucroTotal = totalVenda - totalCompra;

	printf("\nRELATORIO:\n");
	printf("Lucro abaixo de 10%%: %d\n", abaixo);
	printf("Lucro entre 10%% e 20%%: %d\n", entre);
	printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", lucroTotal);

    return 0;
}
