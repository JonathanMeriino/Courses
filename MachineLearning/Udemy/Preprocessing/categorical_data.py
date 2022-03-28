import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.impute import SimpleImputer  # calculo de los datos
from sklearn import preprocessing
#importar el dataset

dataset = pd.read_csv('Data.csv')
x = dataset.iloc[:,0:3].values  #localizar elementos por posicion
#x = dataset.iloc[:,:-1].values
y = dataset.iloc[:,3].values

#codificar datos categoricos
from sklearn.preprocessing import LabelEncoder, OneHotEncoder
from sklearn.compose import ColumnTransformer
le_X = preprocessing.LabelEncoder()
x[:,0] = le_X.fit_transform(x[:,0])
#print(x)
ct = ColumnTransformer(
    [('one_hot_encoder', OneHotEncoder(categories='auto'), [0])],   
    remainder='passthrough'                        
)
x = np.array(ct.fit_transform(x), dtype=float)
le_y = preprocessing.LabelEncoder()
y = le_y.fit_transform(y)