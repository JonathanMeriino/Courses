import pandas as pd
import numpy as np

df = pd.DataFrame(np.array([[1,2,3],[4,5,6],[7,8,9]]))

#forma del dataframe
print('Forma del dataFrame: ')
print(df.shape)

#altura del dataframe
print('Altura del dataframe: ')
print(len(df.index))

#estadisticas del dataframe
print('Estadisticas del dataframe')
print(df.describe())

#medida de las columnas DataFrame
print('Medida de las columnas dataframe: ')
print(df.mean())

#Correlacion del dataframe
print('Correlacion del dataframe')
print(df.corr())

#Cuenta los datos del dataframe
print('Conteo de datos del DataFrame: ')
print(df.count())

#valor mas alto de cada columna del dataframe
print('Valor mas alto de cada columna del dataframe: ')
print(df.max())

#valor minimo de cada columna del dataframe
print('Valor minimo de cada columna del dataframe: ')
print(df.min())

#Medida de cada columna del dataframe
print('Mediana de la columna del dataframe: ')
print(df.median())

#Desviacion estandar de cada columna del DataFrame
print('Desviacion estandar de la columna del DataFrame: ')
print(df.std())

#Seleccionar la primera columna del dataframe
print('Primera columna del dataframe: ')
print(df[0])

#Seleccionar dos columnas del dataframe
print('Dos columnas del dataframe: ')
print(df[0,1])

#Seleccionar el valor de la primera fila y ultima columna del dataframe
print('Valor de la primera fila y ultima columna del dataframe: ')
print(df.iloc[0][2])

#Seleccionar los valores de la primera fila del dataframe
print('Valores de la primera fila del dataframe: ')
print(df.loc[0])

#seleccionar los valores de la primera fila del DataFrame
print('Valores de la primera fila del dataframe: ')
print(df.iloc[0,:])

#importar exportar
df = pd.read_csv('train.csv')

#limpieza
#verificar si hay datos nulos en el dataframe
print('Datos nulos en el frame: ')
print(df.isnull())

#suma de datos nulos en el dataframe
print('Suma datos nulos en el dataframe: ')
print(df.isnull().sum())

df.dropna() # eliminar las filas con datos perdidos
df.dropna(axis=1) # eliminar columnas con datos perdidos
df.fillna(x) # remplaza los valores perdidos con equis