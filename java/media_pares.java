import java.util.Locale;
import java.util.Scanner;

public class media_pares {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N, somaPares, pares;
		double mediaPares;

		System.out.print("Quantos elementos vai ter o vetor? ");
		N = sc.nextInt();

		int[] vet = new int[N];

		for (int i = 0; i < N; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();
		}
		
		somaPares = 0;
		pares = 0;
		for (int i = 0; i < N; i++) {
			if (vet[i] % 2 == 0) {
				somaPares = somaPares + vet[i];
				pares++;
			}
		}

		if (pares == 0) {
			System.out.println("NENHUM NUMERO PAR");
		} 
		else {
			mediaPares = (double) somaPares / pares;

			System.out.printf("MEDIA DOS PARES = %.1f\n", mediaPares);
		}

		sc.close();
	}
}