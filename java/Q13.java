// Gerar uma progressão aritmética do tipo: 1,4,7,10,13 .... com "N" números

import java.util.Scanner;

public class Main{
    public static void main(String [] args){
        Scanner scan = new Scanner(System.in);
        int N;
        System.out.println("Digite a quantidade N de termos: ");
        N = scan.nextInt();
        int prog = 1;
        for(int i=0; i<N;i++){
            System.out.println(prog);
            prog = prog+3;
        }
        
    }
}

