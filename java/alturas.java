import java.util.Locale;
import java.util.Scanner;

public class alturas {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N, menores;
		double alturaTotal, alturaMedia, percentualMenores;

		System.out.print("Quantas pessoas serao digitadas? ");
		N = sc.nextInt();

		String[] nomes = new String[N];
		int[] idades = new int[N];
		double[] alturas = new double[N];

		for (int i = 0; i < N; i++) {
			System.out.printf("Dados da %da pessoa:\n", i + 1);
			System.out.print("Nome: ");
			nomes[i] = sc.next();
			System.out.print("Idade: ");
			idades[i] = sc.nextInt();
			System.out.print("Altura: ");
			alturas[i] = sc.nextDouble();
		}

		menores = 0;
		alturaTotal = 0;
		for (int i = 0; i < N; i++) {
			if (idades[i] < 16) {
				menores++;
			}
			alturaTotal = alturaTotal + alturas[i];
		}

		alturaMedia = alturaTotal / N;
		percentualMenores = ((double) menores / N) * 100.0;

		System.out.printf("\nAltura media = %.2f\n", alturaMedia);
		System.out.printf("Pessoas com menos de 16 anos: %.1f%%\n", percentualMenores);

		for (int i = 0; i < N; i++) {
			if (idades[i] < 16) {
				System.out.printf("%s\n", nomes[i]);
			}
		}

		sc.close();
	}
}