"""
Restricciones de la regresion Lineal
1. Linealidad
2. Homocedasticidad
3. Normalidad multivariable
4. Independencia de los errores
5. Ausencia de multicolinealidad

Variables Dummy

Construir el modelo

5 metodos de construir modelos
1. Exhaustivo (All-in) -> conocimiento a priori
2. Eliminacion hacia atras 
3. Seleccion hacia adelante
4. Eliminacion bidereccional
5. Comparacion de scores
"""
#Regresion Lineal Multiple

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.impute import SimpleImputer  # calculo de los datos
from sklearn import preprocessing

dataset = pd.read_csv('50_Startups.csv')
x = dataset.iloc[:,:-1].values  #localizar elementos por posicion
#x = dataset.iloc[:,:-1].values
y = dataset.iloc[:,4].values

#codificar datos categoricos
from sklearn.preprocessing import LabelEncoder, OneHotEncoder
from sklearn.compose import ColumnTransformer
le_X = preprocessing.LabelEncoder()
x[:,3] = le_X.fit_transform(x[:,3])
#print(x)
ct = ColumnTransformer(
    [('one_hot_encoder', OneHotEncoder(categories='auto'), [3])],   
    remainder='passthrough'                        
)
x = np.array(ct.fit_transform(x), dtype=float)
#evitar la trampa de variables ficticias
x = x[:,1:]

#DIVIDIR el dataset en conjunto de entrenamiento y conjunto de testing
from sklearn.model_selection import train_test_split
x_train , x_test , y_train, y_test =  train_test_split(x,y,test_size=0.2,random_state=0)

#ajustar el modelo de regresion lineal multiple con el conjunto de entrenamiento
from sklearn.linear_model import LinearRegression
regression = LinearRegression()
regression.fit(x_train,y_train)
#Preddiccion de los resultados en el conjunto de testing
y_pred = regression.predict(x_test)









