import java.util.Scanner;

public class Main{
    public static void main(String[] args){
       Scanner scan = new Scanner(System.in);
       int num1, num2;
       double media;
       System.out.println("Digite dois numeros: ");
       num1 = scan.nextInt();
       num2 = scan.nextInt();
       media = Math.pow((num1 * num2), (1.0/2.0));
       System.out.println(media);
    }
}
