import java.util.Locale;
import java.util.Scanner;

public class pagamento {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		String nome;
		double valorHoras, pagamento;
		int horasTrabalhadas;
		
		System.out.print("Nome: ");
		nome = sc.nextLine();
		System.out.print("Valor por hora: ");
		valorHoras = sc.nextDouble();
		System.out.print("Horas trabalhadas: ");
		horasTrabalhadas = sc.nextInt();
		
		pagamento = valorHoras * horasTrabalhadas;
		
		System.out.printf("O pagamento para %s deve ser %.2f\n", nome, pagamento);
		
		sc.close();
	}
}
