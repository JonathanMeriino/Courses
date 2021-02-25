//Bucle for each
public class Bucleforeach {
    public static void main(String[] args) {
        String[] nombres = {"Alejandro", "Maria", "Luisa", "Juan", "Narcisa", "Luis","Roberto","Flor","Jessica"};

        for (int i=0; i< nombres.length;i++){
            System.out.println(nombres[i]);
        }

        for (String i:nombres){
            System.out.println("Nombres: "+i);
        }
    }
}
