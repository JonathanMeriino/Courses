"""
Creado por Jonathan Merino
Curso: Introduccion a la programacion con Python
        Mathe Virtual
Impartido por: Jonathan Merino
"""


#conversion
""" 
print(list('Python'))
print(list())
print([]) """

#obtener un elemento


""" print(compras[0])
print(compras[1])
print(compras[2])
print(compras[-1]) """

#trocear una lista
""" print(compras) """
""" print(compras[0:3])
print(compras[:3])
print(compras[2:4]) """

""" print(compras[::-1]) """

""" print(compras[10:])
print(compras[-100:2])
print(compras[2:100]) """

#reversed()

""" print(list(reversed(compras))) """

#añadir al final de una lista ->  append()

""" compras.append('atun')

print(compras)
#creando desde vacio
numerosPares = []

for i in range (20):
    if i % 2==0:
        numerosPares.append(i)

    print(numerosPares)  """

# anñadir en cualquier posicion -> insert()


""" compras.insert(1,'Jamon')
compras.insert(3,'Queso')
compras.insert(100,'Mermelada')
compras.insert(-100,'Arroz') """
""" print(compras*3)  """



#combinar
# print(compras+frutas)
""" compras.extend(frutas)
compras.extend('limon') """


""" compras[0] = 'Jugo'

print(compras) """

#modificar con troceado

# compras[1:4] = ['atun','pasta']


#borrar elementos


# del(compras[3]) #por su indice -> del()

# compras.remove('agua')    #por su valor -> remove()

# por su indice (con extraccion)  -> pop()
""" print(compras.pop(2))
print(compras)
 """
#por su rango

""" compras[1:len(compras)-1] = []

print(compras) """

#borrado completo de la lista -> clear()

# compras.clear()
""" compras = []

print(compras) """

#encontrar un elemento
""" print(compras.index('huevo'))

#pertenencia
print('aceite' in compras)
print('pollo' in compras) """


compras = ['agua','huevo','aceite','sal','limon']
frutas = ['naranja','manzana','piña']
print(compras)

#numero de ocurrencias  count()

""" print(compras.count('arroz'))
print(compras.count('agua'))

#convertir lista a cadena de texto  join()

print('|'.join(compras)) """
# print('|'.join([1,2,3,4,5]))   -> error

#ordenar una lista   

""" print(sorted(compras))  # sorted()
print(sorted(compras, reverse=True))  # sorted()
compras.sort()
print(compras)  # sort() """

#longitud de una lista 

# print(len(compras))

#iterar sobre una lista
""" 
for producto in compras:
    print(producto)

#usando enumeracion

for i,producto in enumerate(compras):
    print(i,producto) """
#iterar sobre multiples listas  -> zip()

# for producto, fruta in zip(compras,frutas):
#     print(producto,fruta)

# print(list(zip(compras,frutas)))

""" listaOriginal = [4,3,7,1]

copiaLista = listaOriginal.copy()   #copy()

listaOriginal[0] = 15

print(listaOriginal,copiaLista , sep='\n') """

#veracidad multiples  all()    any()

""" palabra = 'Python'

tamaño = len(palabra) > 4           #True
inicio= palabra.startswith('P')     #True
min_y = palabra.count('y')>=1       #True


esValido = all([tamaño, inicio,min_y])

if esValido:
    print('Es valido')
else:
    print('No lo es')


palabra = 'yeah'

tamaño = len(palabra) > 4           #False
inicio= palabra.startswith('P')     #False
min_y = palabra.count('y')>=1       #True


esValido = any([tamaño, inicio,min_y])

if esValido:
    print('Es valido')
else:
    print('No lo es') """

#listas por compresion

valores= '32,45,11,87,20,48'

""" int_valores= []

for valor in valores.split(','):
    int_valor=int(valor)
    int_valores.append(int_valor) """

#   [ <expresion> for <valor> in  <iteracion> if <condicion>]

""" int_valores = [int(valor) for valor in valores.split(',')]
print(int_valores)
int_valores = [int(valor) for valor in valores.split(',') if valor.startswith('4')]
print(int_valores) """

#anidamiento en compresiones
""" svalores = valores.split(',')

combinaciones = [f'{v1}x{v2}'for v1 in svalores for v2 in svalores]

print(len(combinaciones))
print(combinaciones) """

#funciones matematicas
""" 
numeros = [5,3,2,8,9,1]

print(sum(numeros))  # suma   sum()

print(min(numeros))  # minimo de todos los valores   min()

print(max(numeros))  # max de todos los valores   min() """

#lista de listas

portero = 'ochoa'
defensores = ['puyol','rafaMarquez','cafue','leo']
medios = ['iniesta','xabi','alonso']
delanteros = ['messi', 'ronaldo','kylian']

equipo = [portero,defensores,medios,delanteros]

print(equipo)

print(equipo[0])
print(equipo[1][0])
print(equipo[2])
print(equipo[3][1])
