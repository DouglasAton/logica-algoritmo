import java.util.Locale;
import java.util.Scanner;

public class soma_matrizes {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);

		int M, N;

		System.out.print("Quantas linhas vai ter cada matriz? ");
		M = sc.nextInt();
		System.out.print("Quantas colunas vai ter cada matriz? ");
		N = sc.nextInt();

		int[][] a = new int[M][N];
		int[][] b = new int[M][N];
		int[][] c = new int[M][N];

		System.out.println("Digite os valores da matriz A:");

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				System.out.printf("Elemento [%d,%d]: ", i, j);
				a[i][j] = sc.nextInt();
			}
		}

		System.out.println("Digite os valores da matriz B:");

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				System.out.printf("Elemento [%d,%d]: ", i, j);
				b[i][j] = sc.nextInt();
			}
		}

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				c[i][j] = a[i][j] + b[i][j];
			}
		}

		System.out.println("MATRIZ SOMA:");

		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				System.out.printf("%d ", c[i][j]);
			}
			System.out.println();
		}

		sc.close();
	}
}