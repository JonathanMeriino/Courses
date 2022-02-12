"""
Creado por Jonathan Merino
Curso: Introduccion a la programacion con Python
        Mathe Virtual
Impartido por: Jonathan Merino
"""

## Creando strings
"""print('Cadena de texto')

print('Los "strings" son secuencias de caracteres')

print('Los \'strings\' son secuencias de caracteres') # comillas simples escapadas

print("Los 'strings' son secuencias de caracteres")

print("")"""
## conversion   str()

"""valor = str(True)

print(valor)
print(type(True))
print(type(valor))

valor = str(10)
print(type(valor))

valor = str(20.7)
print(type(valor))"""

## secuencias de escape

#saltos de linea 
"""msg = 'Primera linea \nSegunda linea \nTercera linea \n'
print(msg)
#tabulador
msg = 'valor = \t40'
print(msg)
# barra invertida
msg = 'Capitulo \\ Seccion \\ Encabezado'
print(msg)"""
#raw data
"""text = 'a\tb\nc'
print(text)

text = r'a\tb\nc'
print(text)"""
## print 

"""msg1 = 'Hola'
msg2 = '¿Como estas?'

print(msg1, msg2)
print(msg1, msg2, sep='|') #separar variable
print(msg1, msg2, end='!!') # indicar el final de la cadena"""

## leer datos desde el teclado

"""nombre = input('Introduzca su nombre: ')
print(nombre)

print(type(nombre))

edad = input('Introduzca su edad: ')

print(edad)
print(type(edad))"""

## operaciones con strings
#combinar cadenas
"""frase1= 'Cuando el rio suena'
frase2 = 'agua lleva'
print(frase1+frase2)
print(frase1+','+frase2)

#repetir cadenas
reaccion = 'OMG!!'
print(reaccion*4)"""

#obtener un caracter
"""oracion = 'Hola, Mundo'

print(oracion[0])
print(oracion[-11])
print(oracion[4])
print(oracion[10])

oracion[4] = 'D'
print(oracion)
"""
#trocear una cadema
"""
[:] Extrae la secuencia entera desde el comienzo hasta el final
[start:] Extrae desde start hasta el final de la cadena
[:end] Extrae desde el comienzo de la cadena hasta end
[start:end] Extrae desde start hasta end
[start:end:step] Extrae desde start hasta end, step indica el tamaño de salto
"""
frase = 'agua pasado no mueve molino'

"""print(frase)
print(frase[:])

print(frase[12:])
print(frase[:11])
print(frase[5:11])
print(frase[5:11:2])"""

#longitud   len()
"""
print(len(frase))
vacio = ''
print(len(vacio))"""

#pertenencia de un elemento
frase = 'Mas vale malo conocido que bueno por conocer'

"""print('malo' in frase)
print('bueno' in frase)
print('regular' in frase)
"""
#dividir una cadena   split()
"""print(frase.split())

herr = 'Martillo,Sierra,Destornillador'
print(herr.split(','))
"""
#realizar busquedas   

letra = """Quiero aprovechar, ya que estoy toma'o
Pa' poder decirte toda' las cosa' que me he guarda'o
Sé que no son hora' de llamar, pero te vi en línea
Y solo quería confirmar si aún eras mi niña"""

"""print(letra.startswith('Quiero'))
print(letra.endswith('Quiero'))
#ocurrencias 
""" 
""" print(letra.find('poder'))
print(letra.index('poder')) """
"""
#print(letra.index('universo'))
print(letra.find('universo'))
#contabilizar
print(letra.count("las"))"""

#remplazar elementos   replace()
""" frase = 'Quien mal anda mal acaba'

print(frase.replace('mal','bien'))
print(frase.replace('mal','bien',1))
 """
#mayusculas y minusculas

""" frase = 'quien a buen arbol se arrima Buena Sombra le cobija'

print(frase)

print(frase.capitalize())

print(frase.title())
print(frase.upper())
print(frase.lower())
print(frase.swapcase()) """


# identificar caracteres

""" print('R2D2'.isalnum()) # detecta si todos los caracteres son letras o numeros
print('C2-P0'.isalnum()) # detecta si todos los caracteres son letras o numeros
# detectar si todos los caracteres son numericos
print('314'.isnumeric())
print('3.14'.isnumeric())
#detectar si todos los caracteres son letras
print('abc'.isalpha())
print('a-b-c'.isalpha()) """

""" print('GRANDE'.isupper()) 
print('small'.islower()) 
 """

## interpolacion de cadenas   f-string
""" nombre = 'leo'
edad = 23
fortuna = 43_300

print(f'Me llamo {nombre} , tengo {edad} años y una fortuna de {fortuna} millones')
x = 10

print(f'La variable es {{ x = {x} }}') """

#formatear cadenas
""" monto = 3718
print(f'{monto: 010d}')

valor = 0b10010011

print(f'{valor}')
print(f'{valor:b}')
valor = 0xab217
print(f'{valor}')
print(f'{valor:x}') """

""" PI = 3.14159265
print(f'{PI}')
print(f'{PI:f}')
print(f'{PI:.3f}')
print(f'{PI:012f}')
print(f'{PI:.12f}')
print(f'{PI:e}')  # x10**0 """

""" serie = 'The Big Bang Theory'
rating = 8.8
temporadas = 10

print(f'{serie=}')
print(f'{rating=}')
print(f'El {rating=}')
print(f'{serie[4:]=}')

print(f'{rating/temporadas=}')
 """

## caracteres Unicode
""" rocket = 0x1F680
cohete = chr(0x1F680)  # permite representar un caracter a partir del codigo
print(cohete) """
## casos de uso
texto = 'Esto es todo'

print(dir(texto))
print(dir(list))