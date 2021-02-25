import java.util.Scanner;

//Operadores aritmeticos
public class operadores {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        /*
        float numero1,numero2, suma, resta, mult, div, resto;

        System.out.println("Digite dos numeros: ");
        numero1 = entrada.nextFloat();
        numero2 = entrada.nextFloat();

        suma = numero1 + numero2;
        System.out.println("La suma es "+suma);

        resta = numero1 - numero2;
        System.out.println("La resta es: "+resta);

        mult = numero1*numero2;
        System.out.println("La multipliacion es: "+mult);

        div = numero1/numero2;
        System.out.println("La division es: "+div);

        resto = numero1%numero2;
        System.out.println("El resto es "+resto);
        */
        //Operadores aritmeticos combinados con asignacion
        int num = 10;

        num += 5;

        System.out.println(num);

        num -= 5;
        System.out.println(num);

        num *= 5;
        System.out.println(num);

        num /= 5;
        System.out.println(num);

        num %= 5;
        System.out.println(num);


    }
}
