import javax.swing.*;
import java.util.Scanner;

public class matriz {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
      /*  int matriz[][]= {{1,2,3},{4,5,6},{7,8,9}};

        for (int i=0; i<3;i++){             //numero de filas
            for (int j=0; j<3;j++){         //numero de columnas
                System.out.print(matriz[i][j]);
            }
            System.out.println("");
        }*/
        int matriz2[][],nFilas,nCol;

        nFilas = Integer.parseInt(JOptionPane.showInputDialog("Digite el numero de filas: "));
        nCol = Integer.parseInt(JOptionPane.showInputDialog("Digite el numero de columnas: "));

        matriz2 = new int[nFilas][nCol];

        for (int i=0;i<nFilas;i++){
            for (int j=0;j<nCol;j++){
                System.out.print("Matriz ["+i+"]["+j+"]: ");
                matriz2[i][j] = entrada.nextInt();
            }
        }
        System.out.println("La matriz es: ");
        for (int i=0; i<nFilas;i++){             //numero de filas
            for (int j=0; j<nCol;j++){         //numero de columnas
                System.out.print(matriz2[i][j]);
            }
            System.out.println("");
        }
    }
}
