package ClasesYObjetos;

public class mainPersona1 {
    public static void main(String[] args) {
        persona1 p1 = new persona1("Alejandro",21);

        p1.correr();

        persona1 p2 = new persona1("123456");
        p2.correr(100);
    }
}
