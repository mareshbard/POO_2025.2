import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        float num1, num2;
        float media;
        System.out.println("Digite dois numeros: ");
            num1 = scan.nextFloat();
            num2 = scan.nextFloat();
        media = (num1+num2)/2;
        System.out.println("A media aritmetica dos dois é: "+media);
    }
}
