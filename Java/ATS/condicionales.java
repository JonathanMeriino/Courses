//sentencia If

import javax.swing.*;
import java.util.Scanner;

public class condicionales {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int numero, dato = 5;

        numero = Integer.parseInt(JOptionPane.showInputDialog("Digite un numero"));

        if(numero != dato){
            JOptionPane.showMessageDialog(null,"El numero es diferente");
        }else {
            JOptionPane.showMessageDialog(null,"EL numero es 5");
        }
    }
}
