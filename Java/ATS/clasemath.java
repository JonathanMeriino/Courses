//clase math
public class clasemath {
    public static void main(String[] args) {

        double raiz = Math.sqrt(9);
        System.out.println(raiz);

        int rais = (int)Math.sqrt(9);
        System.out.println(rais);

        double base= 4, exponente = 3;
        double resultado = Math.pow(base,exponente);

        System.out.println(resultado);

        double numero = 4.56;
        long res = Math.round(numero);

        System.out.println(res);

        float numero2 = 7.89f;
        int result = Math.round(numero2);

        System.out.println(result);

        double numero3= Math.random();
        System.out.println(numero3);
    }
}
