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
x = dataset.iloc[:,0:3].values  #localizar elementos por posicion
#x = dataset.iloc[:,:-1].values
y = dataset.iloc[:,3].values


#DIVIDIR el dataset en conjunto de entrenamiento y conjunto de testing
from sklearn.model_selection import train_test_split
x_train , x_test , y_train, y_test =  train_test_split(x,y,test_size=0.2,random_state=0)

# escalado de variables
"""sc_x= preprocessing.StandardScaler()
x_train = sc_x.fit_transform(x_train)
x_test = sc_x.transform(x_test)"""