alvaro = 10

if alvaro %2 ==0:
    print("El resto es cero")
else:
    print("El resto no es cero")

alvaro =13

if alvaro %2 ==0:
    print("El resto es cero")
else:
    print("El resto no es cero")

frase = 'hola'

if frase == 'No':
    print("Bienvenid@s")
elif frase == 'hola':
    print("Nos estan saludando")
else:
    print("Esto no da ningun resultado")

final = float(input("Coloca la nota: "))
if final >=9:
    print("Eres un genio")
elif final >= 7:
    print("Aprobaste")
elif final ==6:
    print("Te falto poco")
elif final <= 5:
    print("Tuviste que haber estudiado mas")
else:
    print("No existe tu nota")