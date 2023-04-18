import java.util.Locale;
import java.util.Scanner;

public class experiencias {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N, totalRatos, totalSapos, totalCoelhos, qtdCobaias, totalCobaias;
		char tipo;
		double percentualRatos, percentualSapos, percentualCoelhos;

		System.out.print("Quantos casos de teste serao digitados? ");
		N = sc.nextInt();

		totalRatos = 0;
		totalSapos = 0;
		totalCoelhos = 0;

		for (int i = 0; i < N; i++) {
			System.out.print("Quantidade de cobaias: ");
			qtdCobaias = sc.nextInt();
			System.out.print("Tipo de cobaia: ");
			tipo = sc.next().charAt(0);

			if (tipo == 'R') {
				totalRatos = totalRatos + qtdCobaias;
			} 
			else if (tipo == 'S') {
				totalSapos = totalSapos + qtdCobaias;
			} 
			else {
				totalCoelhos = totalCoelhos + qtdCobaias;
			}
		}

		totalCobaias = totalRatos + totalSapos + totalCoelhos;
		percentualCoelhos = ((double) totalCoelhos / totalCobaias) * 100.0;
		percentualRatos = ((double) totalRatos / totalCobaias) * 100.0;
		percentualSapos = ((double) totalSapos / totalCobaias) * 100.0;

		System.out.println("\nRELATORIO FINAL:");
		System.out.printf("Total: %d cobaias\n", totalCobaias);
		System.out.printf("Total de coelhos: %d\n", totalCoelhos);
		System.out.printf("Total de ratos: %d\n", totalRatos);
		System.out.printf("Total de sapos: %d\n", totalSapos);
		System.out.printf("Percentual de coelhos: %.2f\n", percentualCoelhos);
		System.out.printf("Percentual de ratos: %.2f\n", percentualRatos);
		System.out.printf("Percentual de sapos: %.2f\n", percentualSapos);

		sc.close();
	}
}
