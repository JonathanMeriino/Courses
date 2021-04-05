print("Elige tu propio camino")

inicio=input("Escribe empezar para comenzar el programa: ")

while(inicio =="empezar"):
    print("""¿Que camino quieres elegir?
            escribe la opcion con numero
            1. Quiero que me saludes
            2. Deseo multiplicar ya que no se como hacerlo
            3. Quiero salir de este programa""")
    opcion = input()

    if opcion == '1':
        print("Te saludo")
    elif opcion == '2':
        numero1 = float(input("Introduce el primer valor a multiplicar"))
        numero2 = float(input("Introduce el segundo valor a multiplicar"))
        print("El resultado es: ",numero1*numero2)
    elif opcion =='3':
        print("Saldras del programa")
        break
    else:
        print("No existe esa opcion")
