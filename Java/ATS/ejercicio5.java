import java.util.Scanner;

public class ejercicio5 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        //Declaracion de variables
        float participacion, primer_examen,segundo_examen, examenFinal, notaFinal;
        //Entrada de datos
        System.out.println("DIgite la nota de participacion");
        participacion = entrada.nextFloat();

        System.out.println("Digite la nota del primer examen: ");
        primer_examen = entrada.nextFloat();

        System.out.println("Digite la nota del segundo examnen: ");
        segundo_examen = entrada.nextFloat();

        System.out.println("DIgite la nota del examen final: ");
        examenFinal = entrada.nextFloat();
        //Calculos
        participacion *= .10f;
        primer_examen *= .25f;
        segundo_examen *= .25f;
        examenFinal *= .40f;

        notaFinal = participacion + primer_examen + segundo_examen + examenFinal;

        System.out.println("La nota final es: "+notaFinal);
    }

}
