"""
Tipos de Variables

Categoricas -> nominales(Hombre , Mujer, Rojo, verde, azul)
            -> Ordinales (Pequeño, mediano, grande, A,B,C -> Notas)

Numericas  -> Discretas (1,2,3 Empleados) (568 Personas)
            ->Continuas (Altura, edad)
            
Regresion - > Estimar relaciones existentes entre variables 
    ->Lineal -> Regresion lineal simple y lineal multiple
    ->Logistica -> logistica simple y logistica multiple
    
"""
"""
Regresion lineal simple : y = b0 + b1*x1

Metodo de los minimos cuadrados
minE(yi-ŷi)²

"""
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.impute import SimpleImputer  # calculo de los datos
from sklearn import preprocessing
#importar el dataset

dataset = pd.read_csv('Salary_Data.csv')
x = dataset.iloc[:,:-1].values  #localizar elementos por posicion
#x = dataset.iloc[:,:-1].values
y = dataset.iloc[:,1].values

#DIVIDIR el dataset en conjunto de entrenamiento y conjunto de testing
from sklearn.model_selection import train_test_split
x_train , x_test , y_train, y_test =  train_test_split(x,y,test_size=1/3,random_state=0)

#modelo de regresion lineal simple 
from sklearn.linear_model import LinearRegression
regression = LinearRegression()
regression.fit(x_train,y_train)

#Predecir el conjunto de test
y_pred = regression.predict(x_test)

#Visualizacion de resultados de entrenamiento
plt.scatter(x_train,y_train, color="red")
plt.plot(x_train, regression.predict(x_train),color="blue")
plt.title("Sueldo vs Años de experiencia (Conjunto de entrenamiento)")
plt.xlabel("Años de experiencia")
plt.ylabel("Sueldo en $")
plt.show()

#Visualizacion de resultados de test
plt.scatter(x_test,y_test, color="red")
plt.plot(x_train, regression.predict(x_train),color="blue")
plt.title("Sueldo vs Años de experiencia (Conjunto de testing)")
plt.xlabel("Años de experiencia")
plt.ylabel("Sueldo en $")
plt.show()










