#!/usr/bin/python
# -*- coding: utf-8 -*-


from PIL import Image             # funciones para cargar y manipular imágenes
import numpy as np
import numpy as geek              # funciones numéricas (arrays, matrices, etc.)
import os


def creaMatriz(i):
    imagenNombre = input ("inserta el nombre de la imagen ")
    local = f"C:\\Users\\IJonysI\\Downloads\\{imagenNombre}.bmp"
    print(f"{local}")
    I = Image.open(local)
    I = I.convert("L")c
    I.show()
    archivo = open(f"C:\\Users\\IJonysI\\Desktop\\ImagenPy{i}.txt","w+")
    print(I.size, I.mode, I.format)
    Igray=np.asarray(I)
    for i in range(len(Igray)):										#recorremos la imagen pixel a pixel por posición
        for j in range(len(Igray[i])):
            archivo.write("["+str(i)+"]"+"["+str(j)+"]"+"="+str(Igray[i][j])+"")	#guardamos el pixel en el archivo nuevo
        archivo.write("\n")													#Obtenemos el unico plano contenido en la imagen
    return Igray





def menu():
	"""
	Función que limpia la pantalla y muestra nuevamente el menu
	"""
	os.system('cls') # NOTA para windows tienes que cambiar clear por cls
	print ("Selecciona una opción")
	print ("\t1 - suma de dos imagenes")
	print ("\t9 - salir")


while True:
    menu()

    opcionMenu = input("inserta un numero valor >> ")

    if opcionMenu=="1":
        x = int(input("inserte la cantidad de imagenes :"))
        hi=[]
        for i in range(x):
            hi.append(creaMatriz(i))
        print(hi[0])
        print(hi[1])
        out_arr = geek.add(hi[0],hi[1])
        archivo = open(f"C:\\Users\\IJonysI\\Desktop\\ImagenPy3.txt","w+")
        for i in range(len(out_arr)):										#recorremos la imagen pixel a pixel por posición
            for j in range(len(out_arr[i])):
                archivo.write("["+str(i)+"]"+"["+str(j)+"]"+"="+str(out_arr[i][j])+"")	#guardamos el pixel en el archivo nuevo
            archivo.write("\n")







        input("precione una tecla")



    elif opcionMenu == "9":
        break
    else:
        print("digite algo permitido")
