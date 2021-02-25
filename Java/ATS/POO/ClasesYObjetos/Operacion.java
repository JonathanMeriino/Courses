package ClasesYObjetos;

import javax.swing.*;

public class Operacion {
    //Atribuos
    int numero1, numero2, suma, resta, multiplicacion, division;


    //metodos

    //metodo para pedirle al usuario que digite dos numeros
    public void leerNumero(){
        numero1 = Integer.parseInt(JOptionPane.showInputDialog("Digite el primer numero: "));
        numero2 = Integer.parseInt(JOptionPane.showInputDialog("Digite el segundo numero: "));
    }
    //metodo para sumar ambos numeros
    public void  sumar(){
        suma = numero1 + numero2;
    }
    //metodo para restar ambos numeros
    public void  restar(){
        resta = numero1 - numero2;
    }
    //metodo para multiplicar ambos numeros
    public void  multiplicar(){
        multiplicacion = numero1 * numero2;
    }
    //metodo para dividir ambos numeros
    public void  dividir(){
        division = numero1 / numero2;
    }

    public void mostrarResultados(){
        System.out.println("La suma es: "+suma);
        System.out.println("La resta es: "+resta);
        System.out.println("La multiplicacion: "+multiplicacion);
        System.out.println("La divison es: "+division);
    }

}
