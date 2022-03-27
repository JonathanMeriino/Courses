import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.impute import SimpleImputer  # calculo de los datos

#importar el dataset

dataset = pd.read_csv('Data.csv')

print(dataset)

x = dataset.iloc[:,0:3].values  #localizar elementos por posicion
#x = dataset.iloc[:,:-1].values
y = dataset.iloc[:,3].values


#Tratamiento de los NAN

#imputer = SimpleImputer(missing_values="NaN",strategy="mean",axis=0)
#imputer=imputer.fit(x[:,1:3])
#x[:,1:3] = imputer.transform(x[:,1:3])
#print(x)

#codificar datos categoricos
from sklearn.preprocessing import LabelEncoder, OneHotEncoder

labelencoder_x= LabelEncoder()
x[:,0]=labelencoder_x.fit_transform(x[:,0])
#print(x)
oneHE= OneHotEncoder(categorical_features=[0])
x = oneHE.fit_transform(x).toArray()
labelencoder_y = LabelEncoder()
y = labelencoder_y.fit_transform()