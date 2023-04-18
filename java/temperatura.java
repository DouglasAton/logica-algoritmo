import java.util.Locale;
import java.util.Scanner;

public class temperatura {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		char escala;
		double C, F;

		System.out.print("Voce vai digitar a temperatura em qual escala (C/F)? ");
		escala = sc.next().charAt(0);

		if (escala == 'F') {
			System.out.print("Digite a temperatura em Fahrenheit: ");
			F = sc.nextDouble();

			C = 5.0 / 9.0 * (F - 32.0);
			System.out.printf("Temperatura equivalente em Celsius: %.2f\n", C);
		}
		else {
			System.out.print("Digite a temperatura em Celsius: ");
			C = sc.nextDouble();

			F = C * 9.0 / 5.0 + 32.0;
			System.out.printf("Temperatura equivalente em Fahrenheit: %.2f\n", F);
		}

		sc.close();
	}
}