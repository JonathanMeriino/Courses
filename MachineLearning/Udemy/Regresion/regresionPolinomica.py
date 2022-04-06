"""
Regresion Lineal Polinomica


"""

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.impute import SimpleImputer  # calculo de los datos
from sklearn import preprocessing

dataset = pd.read_csv('Position_Salaries.csv')
x = dataset.iloc[:,1:2].values  #localizar elementos por posicion
y = dataset.iloc[:,2].values

#Ajustar la regresion lineal
from sklearn.linear_model import LinearRegression
lin_reg = LinearRegression()
lin_reg.fit(x,y)
#Ajustar la regresion Polinomial
poly_reg=preprocessing.PolynomialFeatures(degree=4)
x_poly=poly_reg.fit_transform(x)
lin_reg2 = LinearRegression()
lin_reg2.fit(x_poly,y)

#visualizacion de los resultados del modelo lineal
plt.scatter(x,y,color='red')
plt.plot(x, lin_reg.predict(x), color='blue')
plt.title("Modelo de regresion lineal")
plt.xlabel("Posicion del empleado")
plt.ylabel("Sueldo en $")
plt.show()

#visualizacion de los resultados del modelo polinomico
x_grid = np.arange(min(x),max(x),0.1)
x_grid = x_grid.reshape(len(x_grid),1)
plt.scatter(x,y,color='red')
plt.plot(x_grid, lin_reg2.predict(poly_reg.fit_transform(x_grid)), color='blue')
plt.title("Modelo de regresion  Polinomica")
plt.xlabel("Posicion del empleado")
plt.ylabel("Sueldo en $")
plt.show()

#prediccion de los modelos
lin_reg.predict([[6.5]])
lin_reg2.predict(poly_reg.fit_transform([[6.5]]))
