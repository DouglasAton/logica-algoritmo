import java.util.Locale;
import java.util.Scanner;

public class dados_pessoas {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N, qtdHomens, qtdMulheres;
		double menorAltura, maiorAltura, alturaFemMedia, alturaFemTotal;

		System.out.print("Quantas pessoas serao digitadas? ");
		N = sc.nextInt();

		double[] alturas = new double[N];
		char[] generos = new char[N];

		for (int i = 0; i < N; i++) {
			System.out.printf("Altura da %da pessoa: ", i + 1);
			alturas[i] = sc.nextDouble();
			System.out.printf("Genero da %da pessoa: ", i + 1);
			generos[i] = sc.next().charAt(0);
		}

		menorAltura = alturas[0];
		maiorAltura = alturas[0];

		for (int i = 1; i < N; i++) {
			if (alturas[i] > maiorAltura) {
				maiorAltura = alturas[i];
			}
			if (alturas[i] < menorAltura) {
				menorAltura = alturas[i];
			}
		}

		qtdHomens = 0;
		qtdMulheres = 0;
		alturaFemTotal = 0;
		for (int i = 0; i < N; i++) {
			if (generos[i] == 'M') {
				qtdHomens++;
			} 
			else {
				qtdMulheres++;
				alturaFemTotal = alturaFemTotal + alturas[i];
			}
		}

		alturaFemMedia = alturaFemTotal / qtdMulheres;

		System.out.printf("Menor altura = %.2f\n", menorAltura);
		System.out.printf("Maior altura = %.2f\n", maiorAltura);
		System.out.printf("Media das alturas das mulheres = %.2f\n", alturaFemMedia);
		System.out.printf("Numero de homens = %d\n", qtdHomens);

		sc.close();
	}
}