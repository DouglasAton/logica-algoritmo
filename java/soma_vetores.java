import java.util.Locale;
import java.util.Scanner;

public class soma_vetores {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N;

		System.out.print("Quantos valores vai ter cada vetor? ");
		N = sc.nextInt();

		int[] a = new int[N];
		int[] b = new int[N];
		int[] c = new int[N];

		System.out.println("Digite os valores do vetor A:");

		for (int i = 0; i < N; i++) {
			a[i] = sc.nextInt();
		}

		System.out.println("Digite os valores do vetor B:");

		for (int i = 0; i < N; i++) {
			b[i] = sc.nextInt();
		}

		for (int i = 0; i < N; i++) {
			c[i] = a[i] + b[i];
		}

		System.out.println("VETOR RESULTANTE:");

		for (int i = 0; i < N; i++) {
			System.out.printf("%d\n", c[i]);
		}

		sc.close();
	}
}