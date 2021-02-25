import java.util.Scanner;

/* Construir un programa que, dado un numero total de horas, devuelve el
numero de semanas, dias, y horas equivalentes.
 */
public class ejercicio7 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        int horasTotales, semanas, dias , horas;

        System.out.println("Digite el numeros de horas: ");
        horasTotales = entrada.nextInt();

        semanas = horasTotales / 168;
        dias = horasTotales%168/24;
        horas = horasTotales%24;

        System.out.println("EL equivalente es: ");
        System.out.println("Semanas: "+semanas);
        System.out.println("Dias: "+dias);
        System.out.println("horas: "+horas);
    }
}
