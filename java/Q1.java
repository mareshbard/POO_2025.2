import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int num;
		System.out.println("Digite um numero: ");
		num = scan.nextInt();
		if(num%2==0){
		    System.out.println(num + " é par");
		}
		else{
		    System.out.println(num+ " é impar");
		}
	}
}
