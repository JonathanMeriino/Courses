'''
variable = float(input("Introduce algo: "))
a = 2
print("resultado: ",a*variable)
'''
try:
    variable = float(input("Introduce un numero: "))
    a=2
    print("resultado: ",a*variable)
except:
    print("Ingresaste cualquier otras cosa menos la que se te pidio")

while(True):
    try:
        variable = float(input("Introduce un numero: "))
        a = 2
        print("resultado: ", a * variable)
        break
    except:
        print("Ingresaste cualquier otras cosa menos la que se te pidio, otra oportunidad")

while(True):
    try:
        variable = float(input("Introduce un numero: "))
        a = 2
        print("resultado: ", a * variable)

    except:
        print("Ingresaste cualquier otras cosa menos la que se te pidio, otra oportunidad")
    else:
        print("Iniciaste sesion perfectamente")
        break

while (True):
    try:
        variable = float(input("Introduce un numero: "))
        a = 2
        print("resultado: ", a * variable)

    except:
        print("Ingresaste cualquier otras cosa menos la que se te pidio, otra oportunidad")
    else:
        print("Iniciaste sesion perfectamente")
        break
    finally:
        print("Perfecto mi amigo, termino todo esto")