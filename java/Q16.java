import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Digite um numero: ");
        int num;
        num = scan.nextInt();
        
        int i = 0;
        int j = 1;
        int aux;
   
        for(int k=0; k<num; k++){
            System.out.println(i+j);
            aux = i;
            i = j+i;
            j = aux;
        }
    }
}
