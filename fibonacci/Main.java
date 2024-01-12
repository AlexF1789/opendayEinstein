/* Quinto programma in Java (uno dei più complessi dei linguaggi di programmazione ma senza dubbio uno dei più usati)

Questo programma calcola l'n-esimo termine della successione di Fibonacci (intendendo gli indici come naturali e non
con il loro significato informatico; partono perciò da 1 anzichè da 0)

*/

import java.util.Scanner;
public class Main{
    public static void main(String[] args) {
        Fibonacci fibonacci = new Fibonacci();
        Scanner input = new Scanner(System.in);

        int termine;
        
        do {
            System.out.print("Inserisci il numero del termine o un numero non positivo per uscire: ");
            termine = input.nextInt();
            System.out.println(fibonacci.fibus(termine-1));
        } while(termine>=1);
    }
}