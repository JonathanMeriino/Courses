"""
Creado por Jonathan Merino
Curso: Introduccion a la programacion con Python
        Mathe Virtual
Impartido por: Jonathan Merino
"""
import math
## Booleanos

"""verdad = True

print(verdad)
"""
## Enteros

"""
#Operaciones con enteros

suma = 2+8+4

print(suma)


divisionFlotante = 7/3

print(divisionFlotante)

divisionEntero = 7 // 3
print(divisionEntero)

print(6/0) # indeterminacion
"""
# 0/6 = 0
#asignacion aumentada

numero = 10
"""
numero = numero + 10

print(numero)"""

"""numero += 10

print(numero)

ejemplo1 = 3

ejemplo1 *= 3

print(ejemplo1)
"""
"""numeroRandom = 15

numeroRandom += 5

print(numeroRandom)

numeroRandom *= 3

print(numeroRandom)

numeroRandom //= 4

print(numeroRandom)

numeroRandom -= 6
print(numeroRandom)

numeroRandom **= 2
print(numeroRandom)
"""

#Modulo 
"""dividendo = 17
divisor = 5

cociente = dividendo // divisor
resto = dividendo % divisor   # Modulo -> %

print(cociente)
print(resto)"""

#Exponenciacion

"""print(4**3)

print(4**0.5)"""

#Valor absoluto: abs()

"""print(abs(-1))

print(abs(-3.14))

print(abs(2))"""

## Flotantes

#Conversion de tipos

#Conversion implicita
"""print(True + 25)
print(7*False)
print(False+True)

print(True + 21.8)

print(10 + 11.3)
"""
#Conversion explicita
"""
bool() Convierte el tipo a booleano
int() Convierte el tipo a entero
float() Convierte el tipo a flotante

"""

"""print(bool(1))
print(bool(0))

print(int(True))
print(int(False))

print(float(1))
print(float(0))

print(float(True))
print(float(False))

print(int(3.1))
print(int(3.9))"""






#Errores de aproximacion: round() -> redondea al entero mas cercano
"""result = (19/155)*(155/19)
print(round(result))

pi = 3.14159265359

print(round(pi))
print(round(pi,1))
print(round(pi,2))
print(round(pi,3))
print(round(pi,4))
"""

## Bases 

#Base binaria  -> 0 y 1 prefijo 0b

"""print(0b1001)

print(bin(9))

print(0b1100)

print(bin(12))
"""

#Base octal - > 0, 1, 2, 3, 4, 5, 6 , 7 -> prefijo 0o

"""print(0o6243)

print(oct(3235))"""

#Base hexadecimal -> 0 ,1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9 , A, B, C, D, E, F -> prefijo 0x

print(0x7F2A)

print(hex(32554))


print(math.sqrt(4))


"""
Orden de precedencia
1. ()
2. ** , sqrt
3. *, /, // , %
4. +, -


"""