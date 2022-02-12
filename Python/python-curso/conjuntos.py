
""" 
loteria = {21,10,46,29,31,94}

print(loteria)
print(type(loteria))

#conjunto vacio
set_vacio = set()

print(type(set_vacio)) """

#conversiones

""" print(set('manzana'))
print(set([1,2,2,1,4,7,8,9,9,8,7,4,4,3,5]))
print(set(('Eduardo', 'Garcia', 'Jose',' Pablo','Monica','Maria')))
print(set({'Nombre': 'Mi nombre',
        'Apellidos': 'Mi apellido',
        'Ocupacion': 'Estudiante'
        })) """

#operaciones con conjuntos

#añadir un elemento
""" 
beatles = set(['Lennon','Paul','Starr','Harrison'])

print(beatles)
beatles.add('Best')
print(beatles)

#borrar elemento

beatles.remove('Best')
print(beatles)

#longitud
print(len(beatles))

#iteracion sobre conjuntos

for beatle in beatles:
    print(beatle)

#pertenencia

print('Lennon' in beatles)
print('Best' in beatles) """

#Teoria de conjuntos

""" A = {1,2}
B = {2,3}

#interseccion

print(A&B)
print(A.intersection(B))

#UNION

print(A|B)
print(A.union(B))

#Diferencia

print(A-B)
print(A.difference(B))

#Diferencia simetrica

print(A^B)
print(A.symmetric_difference(B)) """

#conjuntos por compresion

""" m3 = {numero for numero in range(0,20) if numero % 3==0}

print(m3)

#conjuntos inmutables

calif = [1,3,5,4,7,8,4,4,7,7,1,2,2,1,3,4]

calif_lev = frozenset(calif)

print(calif_lev)

calif_lev.add(11)
 """