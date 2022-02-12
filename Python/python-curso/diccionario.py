"""
Creado por Jonathan Merino
Curso: Introduccion a la programacion con Python
        Mathe Virtual
Impartido por: Jonathan Merino
"""

# conversion  -> dict()

#diccionario a partir de una lista de cadenas de texto 

""" print(dict(['a1','b2']))

#diccionario a partir de una tupla de cadenas de texto 
print(dict(('a1','b2')))

#diccionario a partir de una lista de listas
 
print(dict([['a',1],['b',2]]))

diccionario_vacio = {}
print(diccionario_vacio) """

persona = dict(
    name='Leo',
    surname = 'Garcia',
    job = 'Estudiante'
    )
# print(persona)

persona2 = {'Nombre': 'Mi nombre',
        'Apellidos': 'Mi apellido',
        'Ocupacion': 'Estudiante'
        }

""" print(persona2['Apellidos'])

# usando get()

print(persona2.get('Nombre'))
print(persona2.get('Programacion','No se encuentra')) """

# anañdir y modificar

persona2['Fecha Cumpleaños'] = '14/05/2014'

# print(persona2) 


# patron creacion
""" vocales = 'aeiou'

enum_vocales = {}

for i, vocal in enumerate(vocales):
    enum_vocales[vocal] = i+1

print(enum_vocales) """

# pertenencia de una clave
""" 
print('Nombre' in persona2)
print('Programacion' in persona2) """

# obtener todos los elementos


print(persona2)

""" print(persona2.keys()) # mediante keys()
print(persona2.values()) # mediante values()
print(persona2.items()) # mediante items() """

#longitud 
print(len(persona2))

#iterar sobre un diccionario

""" for palabra in persona2.keys():  #llaves
    print(palabra) """
""" 
for valor in persona2.values(): # valores
    print(valor) """

""" for palabra, valor in persona2.items():
    print(f'{palabra}: {valor}') """

#combinar diccionario

persona3 = {
    'direccion': 'CDMX',
    'deporte': 'soccer'
}

print({**persona2,**persona3})
# print(persona2 | persona3)

""" persona2.update(persona3)
print(persona2) """

#borrar elementos
""" del(persona2['Ocupacion'])  #por su clave
print(persona2) """

#por extraccion pop()
""" valorX = persona2.pop('Nombre')

print(valorX) 
print(persona2)  """

# borrado completo clear()

""" persona2.clear()

print(persona2) """

""" persona2={}
print(persona2) """

#copias

""" copia_persona2 = persona2.copy()

copia_persona2['edad'] = 22

print(persona2, copia_persona2, sep="\n") """