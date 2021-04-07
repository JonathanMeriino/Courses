
try:
    a = input("Numero: ")
    print(10/a)
except Exception as x:
    print(type(x).__name__)

try:
    a = float (input("Numero: "))
    print(10/a)
except TypeError:
    print("Esto es una cadena querido")
except ValueError:
    print("La cadena debe ser un numero")
except ZeroDivisionError:
    print("No se puede dividir por cero")

except Exception as x:
    print(type(x).__name__)

def profesor (estudiantes = None):
    if estudiantes is None:
        print("Debes escribir algo")
profesor('algo')
profesor()

def profesor (estudiantes = None):
        if estudiantes is None:
            raise ValueError("Debes escribir algo")