/*Ejercicio 3: Guillermo tiene N dolares.
Luis tiene la mitad de lo que posee Guillermo.
Juan tiene la mitad de lo que posee Luis y guillermo juntos.
Hacer un programa que calcule e imprima la cantidad de dinero que tiene los tres.
 */
import java.util.Scanner;

public class ejercicio3 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        float guillermo, luis, juan, total;

        System.out.println("La cantidad de dinero que tiene guillermo: ");
        guillermo = entrada.nextFloat();

        luis = guillermo/2;
        juan = (guillermo+luis)/2;

        total = guillermo + luis + juan;
        System.out.println("La cantidad de dinero entre los tres es: "+total);
    }
}
