import java.util.Locale;
import java.util.Scanner;

public class diagonal_negativos {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N, qtdNegativos;

		System.out.print("Qual a ordem da matriz? ");
		N = sc.nextInt();

		int[][] mat = new int[N][N];

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				System.out.printf("Elemento [%d,%d]: ", i, j);
				mat[i][j] = sc.nextInt();
			}
		}

		System.out.println("DIAGONAL PRINCIPAL:");

		for (int i = 0; i < N; i++) {
			System.out.printf("%d ", mat[i][i]);
		}

		qtdNegativos = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (mat[i][j] < 0) {
					qtdNegativos++;
				}
			}
		}

		System.out.printf("\nQUANTIDADE DE NEGATIVOS = %d\n", qtdNegativos);

		sc.close();
	}
}