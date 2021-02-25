package ClasesYObjetos;

public class persona1 {
    //atributos
    String nombre;
    int edad;
    String dni;

    //metodos


    public persona1(String nombre, int edad) {
        this.nombre = nombre;
        this.edad = edad;
    }

    public persona1(String dni) {
        this.dni = dni;
    }

    public void correr(){
        System.out.println("Soy "+nombre+",tengo "+edad+"años y estoy corriendo una maraton");
    }
    public  void correr(int km){
        System.out.println("He corrido "+km+"kilometros");

    }
}
