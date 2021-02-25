package Herencia;

public class Estudiante extends Persona{
    private int codigoEstudiante;
    private float notaFinal;

    //constructor
    public Estudiante(String nombre, String apellido, int edad,int codigoEstudiante, float notaFinal){
        super(nombre,apellido,edad);
        this.codigoEstudiante = codigoEstudiante;
        this.notaFinal = notaFinal;

    }

    public void mostrarDatos(){
        System.out.println("Nombre: "+getNombre()+
                "\nApellido: "+getApellido()+
                "\nEdad: "+getEdad()+
                "\nCodigo del estudiante: "+codigoEstudiante+
                "\nNota final: "+notaFinal);
    }

}
