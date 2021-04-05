

lista = [1,2,3,4,5,6,7,8,9]
indice = 0
'''
while indice < len(lista):
    print(lista[indice])
    indice +=1
'''
for recorrer in lista:
    print(recorrer)

for recorrer in lista:
    recorrer *= 15
    print(recorrer)

for recorrer in lista:
    lista[indice] *= 10
    indice+=1

print(lista)

lista = [1,2,3,4,5,6,7,8,9]
indice = 0

for indice,recorrer in enumerate(lista):
    lista[indice] *= 10
print(lista)

string = 'Jonathan'

for caracteres in string:
    print(caracteres)

for i in range(10):
    print(i)

range(10)

for i in [1,2,3,4,5]:
    print(i)

print(list(range(10)))