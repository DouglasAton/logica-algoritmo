import java.util.Scanner;

public class numeros_pares {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int N, qtdPares;

		System.out.print("Quantos numeros voce vai digitar? ");
		N = sc.nextInt();

		int[] vet = new int[N];

		for (int i = 0; i < N; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = sc.nextInt();
		}

		System.out.println("\nNUMEROS PARES:");

		qtdPares = 0;
		for (int i = 0; i < N; i++) {
			if (vet[i] % 2 == 0) {
				System.out.printf("%d  ", vet[i]);
				qtdPares++;
			}
		}

		System.out.printf("\n\nQUANTIDADE DE PARES = %d\n", qtdPares);

		sc.close();
	}
}