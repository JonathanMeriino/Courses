//Entrada de datos

import java.util.Scanner;

public class introduccion {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        //Entrada tipo de dato entero
        int numero;

        System.out.println("Digite un numero: ");
        numero = entrada.nextInt();

        System.out.println("El numero es: "+numero);
        //Entrada tipo de dato flotante
        float num;

        System.out.println("Digite un numero: ");
        num = entrada.nextFloat();

        System.out.println("El numero es: "+num);
        //Entrada tipo de dato double
        double numero2;

        System.out.println("Digite un numero: ");
        numero2=entrada.nextDouble();

        System.out.println("El numero es: "+numero2);
        //Entrada tipo de dato cadena
        String cadena1;

        System.out.println("Digite una cadena: ");
        cadena1 = entrada.next();

        System.out.println("La cadena es: "+cadena1);
        //enttrada de tipo de dato cadena
        String cadena2;

        System.out.println("Digite una cadena: ");
        cadena2 = entrada.nextLine();

        System.out.println("La cadena es: "+cadena2);
        //Entrada tipo de dato caracter
        char letra;

        System.out.println("Digite una letra");
        letra = entrada.next().charAt(0);

        System.out.println("La cadena es: "+letra);
    }
}
