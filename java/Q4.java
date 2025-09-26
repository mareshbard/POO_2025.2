import java.util.Scanner;

public class Main{
    public static void main(String[] args){
       Scanner scan = new Scanner(System.in);
       int num1, num2;
       double media;
       System.out.println("Digite dois numeros: ");
       num1 = scan.nextInt();
       num2 = scan.nextInt();
       media = 2.0/((1.0/num1)+(1.0/num2));
       System.out.println("A media harmonica é: "+media);
    }
}
