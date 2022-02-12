
"""
Creado por Jonathan Merino
Curso: Introduccion a la programacion con Python
        Mathe Virtual
Impartido por: Jonathan Merino
"""
#tuplas de un elemento

# tupla1 =('Leo garcia',)

""" print(tupla1)
print(type(tupla1)) """


tupla1 = 'Leo garcia',
tupla2 = 'melchor' , 'gaspar', 'baltazar'
tupla3 = 28.46824 , -16.25462
""" print(tupla1)
print(tupla2)
print(tupla3) """

# tupla2[0]='tom hanks'   -> error

compras = ['agua','huevo','aceite','sal','limon']

#conversion
""" print(compras)
print(tuple(compras))
print(tuple()) """

""" 
Operaciones con las tuplas
reverse()
append()
extend()
remove()
clear()
sort()
"""

#desempaquetado de tuplas

""" a_tupla = ('valor1','valor2','valor3')

var1, var2, var3 = a_tupla

print(var1, var2, var3, sep=" \n")

#intercambio de valores para
valor1 = 40
valor2 =20

valor1, valor2 = valor2, valor1

print(valor1, valor2,sep=" \n")

# divmod()

valor = divmod(7,3)

print(valor) """

#desempaquetado extendido

""" palabra = ('G','A','B','C','D','Y','W',)

head, *body, tail = palabra

print(head, body,tail, sep=" \n") """

#desempaquetado generico

""" oxigeno = 'O2'

primero, ultimo = oxigeno

print(primero, ultimo, sep=" \n")

texto = 'Hello world!'
head, *body, tail = texto

print(head, body, tail, sep="\n")

nombre1, nombre2, nombre3 = ['Eduardo Garcia', 'Jose Pablo','Monica Maria']

print(nombre1, nombre2, nombre3) """

