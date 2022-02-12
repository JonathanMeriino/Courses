

""" def saludo():
    print('Hola Mundo')

saludo() """

""" def valor():
    return 1

if valor()==1:
    print('Es valor es 1')
else:
    print('El valor es diferente') """


""" def vacio():
    x=0

print(vacio()) """

""" def veracidad(obj):
    if obj:
        print(f'{obj} es Verdadero')
    else:
        print(f'{obj} es falso')

print(veracidad(True)) """

""" def raiz(valor):
    return valor**(1/2)

print(raiz(4)) """

""" def _min(a,b):
    if a<b:
        return a
    else:
        return b

print(_min(11,9)) """

#parametros posicionales
""" 
def build_cpu(vendor,num_cores,freq=2.0):
    return dict(
        vendor=vendor,
        num_cores=num_cores,
        freq=freq
    )

""" 

#print(build_cpu('AMD',8,2.7))

#argumentos nominales

#print(build_cpu('AMD',freq=2.7,num_cores=8)) """

#print(build_cpu('INTEL',num_cores=8)) """

#empaquetar / desempaquetar argumentos

""" def test_args(*args):
    print(f'{args=}')


mis_args = (1,2,3,4)

print(test_args(mis_args))  # No existe desempaquedo
print(test_args(*mis_args))  """# Si existe

# print(test_args(1,2,3,'monica','eduardo','marco'))

""" def sum_all(v1,v2,*args):
    total=0

    for valor in (v1,v2) + args:
        total += valor

    return total

print(sum_all(1,2,3,4,5,6)) """

# E/D args nominales

""" def test_kwargs(**kwargs):
    print(f'{kwargs=}')

print(test_kwargs())
print(test_kwargs(a=4, b=5, c=6, d=3)) """

# argumentos solo posicionales

""" def sum_p(a,b, /, p=False):     #  (posicionales , / , posicionales o nominales )
    
    if p:
        a**=2
        b**=2

    return a+b

print(sum_p(3,4))
print(sum_p(3,4,True))
print(sum_p(3,4,p=True)) """
# print(sum_p(a=3,b=4))  -> error

# args solo nominales
""" def sum_p(a,b, *, p=False):     #  (posicionales o nominales, * , Nominales )
    
    if p:
        a**=2
        b**=2

    return a+b

print(sum_p(a=3,b=4))
print(sum_p(a=3,b=4,p=True)) """
# print(sum_p(a=3,b=4, True)) -> error

# fijando args posicionales y nominales


""" def sum_p(a,b,/, *, p=False):    #( solo posicionales ,/,*, solo nominales)
    
    if p:
        a**=2
        b**=2

    return a+b

print(sum_p(3,4,p=True)) """
# print(sum_p(a=3,b=4))
# print(sum_p(a=3,b=4,p=True))

# funciones como parametros

""" def funcion1():
    print('Hola mundo')

# print(type(funcion1))

def funcion2(f):
    f()

print(funcion1())
print(funcion2(funcion1)) """

""" def rep_p(texto, veces=1):
    return texto * veces

print(type(rep_p))

def ejec(f,arg1,arg2):
    return f(arg1,arg2)


print(ejec(rep_p, 'Funciones como parametros',3)) """

# tipos de funciones

# funciones interiores -> definir una funcion dentro de otra funcion

""" def val_test(texto):
    
    def char_valido(char):
        return char in 'xyz'
    
    checklist = []

    for char in texto:
        checklist.append(char_valido(char))

    return sum(checklist)/ len(texto)

print(val_test('zxyzxxyz'))    # 8 / 8
print(val_test('abzxyabcdz'))     #   4 / 10
print(val_test('abc')) """  # 0/8

#Clausuras

""" def multiplicador(n):
        def multiplicar(x):
            return x*n
        return multiplicar

m3 = multiplicador(3)

m5 = multiplicador(5)

print(type(m3))
print(type(m5))

print(m3(7))
print(m5(8)) """

#Funciones anonimas <lambda>

""" 
1. Se escribe con una sentencia unica
2. No tiene nombre
3. Su cuerpo tiene implicito un return
4. Puede recibir cualquier numero de parametros

 """

""" um_palabras = lambda t: len(t.strip().split())

print(type(num_palabras))

print(num_palabras)

print(num_palabras('Hola mundo'))
print(num_palabras('Hola como estas')) """

""" andLogico = lambda x,y: x & y

for i in range(2):
    for j in range(2):
        print(f'{i} & {j} = {andLogico(i,j)}') """


""" geoloc = (
    (15.45678,13.4787),
    (55.7894,-2.78945),
    (54.7894,-73.78945),
    (3.7894,115.78945),
    (-40.7894,172.78945),
    
)

print(sorted(geoloc))  # ordena con base en el primer elemento

print(sorted(geoloc, key=lambda t:t[1]))  """

# funciones recursivas -> es una funcion que se llama a si misma

""" def llamado():
    return llamado()

print(llamado()) """

# { 1, 1 , 2,3 ,5 ,8}

def fibonacci(n):
    if n ==0:
        return 0
    if n == 1:
        return 1
    
    return fibonacci(n-1) + fibonacci(n-2)

# print(fibonacci(20))

# espacios de nombres
# acceso a variables globales


""" def mexico():
    print(f'{lenguaje=}')

print(lenguaje)
print(mexico()) """

# crear variables locales

idioma = 'español'

""" def mexico():
    idioma = 'otomie'
    print(f'{idioma=}')


print(mexico()) """

# forzando modificacion global   -> global()

""" def mexico():
   
    idioma = 'otomie'
    print(f'{idioma=}')

print(idioma)
print(mexico()) """

# contenido de los espacios de nombres

lenguaje = 'español'

""" 
locals() -> devuelve un diccionario con los contenidos del espacio de nombre local
globals() -> devuelve un diccionario con los contenidos del espacio de nombre global

 """

def mexico():
     lenguaje = 'otomie'
     print(f'{locals()=}')

""" print(lenguaje)
print(mexico())

print(globals()) """



