import java.util.Locale;
import java.util.Scanner;

public class tempo_de_jogo {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int horaInicial, horaFinal;

		System.out.print("Hora inicial: ");
		horaInicial = sc.nextInt();

		System.out.print("Hora final: ");
		horaFinal = sc.nextInt();

		if (horaInicial < horaFinal) {
			System.out.printf("O JOGO DUROU %d HORA(S)\n", horaFinal - horaInicial);
		}
		else {
			System.out.printf("O JOGO DUROU %d HORA(S)\n", 24 - (horaInicial - horaFinal));
		}

			sc.close();
	}
}