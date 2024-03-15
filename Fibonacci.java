import java.util.Scanner;

public class Fibonacci {

	public static void main(String[] args) {
		System.out.println("Digite o número desejado:");
		
		Scanner sc = new Scanner(System.in);
		
		int numero = sc.nextInt();
		
		if (verificar(numero))
		{
			System.out.println(numero + " pertence à sequência Fibonacci.");
		}
		else {
			System.out.println(numero + " não pertence à sequência Fibonacci.");
		}
		sc.close();
	}
	public static boolean verificar(int num)
	{
		int ant = 0;
		int atual = 1;
		
		while (atual < num)
		{
			int prox = ant + atual;
			ant = atual;
			atual = prox;
		}
		
		return num == atual;
	}
}


