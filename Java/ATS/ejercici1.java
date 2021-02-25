import java.util.Scanner;

//Ejercicio 1: Hacer un programa que calcule e imprima la suma de tres calificaciones
public class ejercici1 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        float nota1, nota2, nota3;
        float suma;
        //Se guardan las notas
        System.out.print("Digite tres calificaciones: ");
        nota1 = entrada.nextFloat();
        nota2 = entrada.nextFloat();
        nota3 = entrada.nextFloat();

        suma = nota1 + nota2 + nota3;

        System.out.println("La suma total es: "+suma);

    }
}
