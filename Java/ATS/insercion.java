import javax.swing.*;
import java.util.Scanner;

public class insercion {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int arreglo[],nElementos,pos,aux;

        nElementos = Integer.parseInt(JOptionPane.showInputDialog("Digite el numero de elementos del arreglo "));

        arreglo = new int[nElementos];

        System.out.println("Digite el arreglo: ");

        for (int i=0;i<nElementos; i++){
            System.out.println((i+1)+".Digite un numero");
            arreglo[i] = entrada.nextInt();
        }
        //Ordenamiento por insercion
        for (int i=0; i<nElementos;i++){
            pos = i;
            aux = arreglo[i];

            while ((pos>0) && (arreglo[pos-1]>aux)){
                arreglo[pos] = arreglo[pos-1];
                pos--;

            }
            arreglo[pos] = aux;
        }
        System.out.println("Orden Ascendente");
        for (int i=0; i<nElementos; i++){
            System.out.println(arreglo[i]+" - ");
        }

        System.out.println("Orden Descendente");
        for (int i=(nElementos-1); i>=0; i--){
            System.out.println(arreglo[i]+"-");
        }

    }
}
