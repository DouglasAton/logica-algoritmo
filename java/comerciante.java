import java.util.Locale;
import java.util.Scanner;

public class comerciante {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N, abaixo, entre, acima;
		double totalCompra, totalVenda, lucroTotal;

		System.out.print("Serao digitados dados de quantos produtos? ");
		N = sc.nextInt();

		String[] nomes = new String[N];
		double[] precosCompra = new double[N];
		double[] precosVenda = new double[N];
		double[] porcentagemLucros = new double[N];

		for (int i = 0; i < N; i++) {
			System.out.printf("Produto %d:\n", i + 1);
			System.out.print("Nome: ");
			sc.nextLine();
			nomes[i] = sc.nextLine();
			System.out.print("Preco de compra: ");
			precosCompra[i] = sc.nextDouble();
			System.out.print("Preco de venda: ");
			precosVenda[i] = sc.nextDouble();
		}

		for (int i = 0; i < N; i++) {
			porcentagemLucros[i] = (precosVenda[i] - precosCompra[i]) / precosCompra[i] * 100.0;
		}

		abaixo = 0;
		entre = 0;
		acima = 0;

		for (int i = 0; i < N; i++) {
			if (porcentagemLucros[i] < 10.0) {
				abaixo++;
			} 
			else if (porcentagemLucros[i] < 20.0) {
				entre++;
			} 
			else {
				acima++;
			}
		}

		totalCompra = 0;
		totalVenda = 0;

		for (int i = 0; i < N; i++) {
			totalCompra = totalCompra + precosCompra[i];
			totalVenda = totalVenda + precosVenda[i];
		}

		lucroTotal = totalVenda - totalCompra;

		System.out.println("\nRELATORIO:");
		System.out.printf("Lucro abaixo de 10%%: %d\n", abaixo);
		System.out.printf("Lucro entre 10%% e 20%%: %d\n", entre);
		System.out.printf("Lucro acima de 20%%: %d\n", acima);
		System.out.printf("Valor total de compra: %.2f\n", totalCompra);
		System.out.printf("Valor total de venda: %.2f\n", totalVenda);
		System.out.printf("Lucro total: %.2f\n", lucroTotal);

		sc.close();
	}
}