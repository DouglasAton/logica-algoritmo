import java.util.Locale;
import java.util.Scanner;

public class cada_linha {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int N, maior;

		System.out.print("Qual a ordem da matriz? ");
		N = sc.nextInt();

		int[][] mat = new int[N][N];
		int[] maiorLinha = new int[N];

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				System.out.printf("Elemento [%d,%d]: ", i, j);
				mat[i][j] = sc.nextInt();
			}
		}

		for (int i = 0; i < N; i++) {
			maior = mat[i][0];
			for (int j = 1; j < N; j++) {
				if (maior < mat[i][j]) {
					maior = mat[i][j];
				}
			}
			maiorLinha[i] = maior;
		}

		System.out.println("MAIOR ELEMENTO DE CADA LINHA:");

		for (int i = 0; i < N; i++) {
			System.out.printf("%d\n", maiorLinha[i]);
		}

		sc.close();
	}
}