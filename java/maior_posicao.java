import java.util.Locale;
import java.util.Scanner;

public class maior_posicao {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N, posMaior;
		double maior;

		System.out.print("Quantos numeros voce vai digitar? ");
		N = sc.nextInt();

		double[] vet = new double[N];

		for (int i = 0; i < N; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextDouble();
		}

		maior = vet[0];
		posMaior = 0;

		for (int i = 1; i < N; i++) {
			if (vet[i] > maior) {
				maior = vet[i];
				posMaior = i;
			}
		}

		System.out.printf("MAIOR VALOR = %.1f\n", maior);
		System.out.printf("POSICAO DO MAIOR VALOR = %d\n", posMaior);

		sc.close();
	}
}