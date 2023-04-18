import java.util.Locale;
import java.util.Scanner;

public class media_ponderada {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N;
		double valor1, valor2, valor3, media;

		System.out.print("Quantos casos voce vai digitar? ");
		N = sc.nextInt();

		for (int i = 0; i < N; i++) {
			System.out.println("Digite tres numeros:");
			valor1 = sc.nextDouble();
			valor2 = sc.nextDouble();
			valor3 = sc.nextDouble();

			media = (valor1 * 2.0 + valor2 * 3.0 + valor3 * 5.0) / 10.0;

			System.out.printf("MEDIA = %.1f\n", media);
		}

		sc.close();
	}
}
