#condicionales combinados

edad = int(input("Digite su edad: "))
'''
if edad>0 and edad<100:
    print("Edad correcta")
    if edad >=18:
        print("Es mayor de edad")
else:
    print("La edad es incorrecta")
'''
if 0<edad<100:
    print("Edad correcta")
    if edad >=18:
        print("Es mayor de edad")
else:
    print("La edad es incorrecta")
