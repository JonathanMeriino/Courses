//encapsulamiento y metodos de acceso (getters y setters)
package paquete1;

public class clase1 {
    private int edad;
    private String nombre;

    //metodo setter: Establecemos la edad
    public void setEdad(int edad){
        this.edad = edad;

    }
    //metodo getter: mostramos la edad
    public int getEdad(){
        return edad;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
}
