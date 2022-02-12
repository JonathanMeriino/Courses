"""
Creado por Jonathan Merino
Curso: Introduccion a la programacion con Python
        Mathe Virtual
Impartido por: Jonathan Merino
"""
## condicional
#sentencia if

""" temperatura = 39

if temperatura > 38:
        print("Tiene fiebre")
        print("Dale medicamento")
else: 
        print("Temperatura normal")
        print("No necesita medicamento")

print("Fin del programa") """

""" temperatura = 11

if temperatura < 20:
        if temperatura<10:
                print("Nivel Azul")
        else:
                print("Nivel verde")
else:
        if temperatura <30:
                print("Nivel Naranja")
        else: 
                print("Nivel rojo")

# else + if -> elif
temperatura = 11

if temperatura < 20:
        if temperatura<10:
                print("Nivel Azul")
        else:
                print("Nivel verde")
elif temperatura <30:
        print("Nivel Naranja")
else: 
        
        print("Nivel rojo") """

""" 
Operadores de comparacion
 asignacion  "="
comparacion/igualdad "=="
desigualdad   "!="
menor que "<"
menor o igual "<=" 
mayor que ">"
mayor o igual ">="

 """

""" value = 8

print(value==8)
print(value!=8)
print(value<12)
print(value<=7)
print(value>4)
print(value>=9)
 """
""" 
Operadores logicos
        or       
        and             
        not
 """
x = 7

""" print(x >4 or x<12)
print(x <4 or x>12)
print(x >4 and x>12) """

"""
p       q        and           or

V       V         V            V      
V       F         F            V 
F       V         F            V 
F       F         F            F       
"""
""" print(x!=8)
print(not(x!=8))
 """

#booleanos en condiciones

""" haceFrio = False

if haceFrio:   # True
        print("Tapate")
else: 
        print("Usa camisa")

if not haceFrio:        # False
        print("Tapate")
else: 
        print("Usa camisa") """

#valor nulo   None

""" valor = None

if valor:              
        print("El valor es Nulo")
else: 
        print("El valor no es utilizado")

if valor is None :
        print("El valor es Nulo")
else: 
        print("El no es utilizado") """

#operador morsa   :=

#version tradicional
# radio= 4.25
""" perimetro = 2*3.1415*radio

if perimetro < 100:
        print("Perimetro actual:",perimetro) """

#operador morsa :=
""" if( perimetro:=2*3.1416*radio) <100:
        print("Perimetro actual: ",perimetro ) """



##bucles

#while

valor = 20

""" while valor <=4:
        print(valor)
        valor +=1 """

#romper un bucle         
""" while valor >=1:
        if valor %3 ==0:
                print(valor)
                break
        valor -=1 """

#comprobar la rotura
""" num = 8

while num >=1:
        if num %9==0:
                print(f'{num} es multiplo de 9')
                break
        num -=1
else:
        print('No es multiplo de 9')  """


#continuar
""" num = 21

while num >=1:
        num -=1
        if num %3==0:
                continue
        print(num, end = ",") #evita saltos de linea """

#bucle infinito

""" num =1

while num != 10:  
        num+=2
        print('a') """

# for
palabra = 'Python'

""" for letra in palabra:
        print(letra) """
#romper un ciclo for

""" for letra in palabra:
        if letra =='t':
                break
        print(letra) """

# secuencias de numeros

""" range(start, stop, step)
start: ess opcional, tiene el valor de 0 por defecto
stop: es obligatoria 
step: es opcional, valor por defecto es 1
 """

""" for i in range(0,3):
        print(i) 

for i in range(3):
        print(i)  """

""" for i in range(1,6,2):
        print(i)  """

""" for i in range(2,-1,-1):
        print(i) """

#uso del guion bajo

""" for _ in range(10):
        print('Repite 10 veces') """

#bucles anidados

for i in range(1,10):
        for j in range(1,10):
                resultado = i*j
                print(f'{i} * {j} = {resultado}')



               
       




