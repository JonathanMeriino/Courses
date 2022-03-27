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

#Tratamiento de los NAN

imputer = SimpleImputer(missing_values = np.nan, strategy = "mean")
imputer = imputer.fit(x[:, 1:3])
x[:, 1:3] = imputer.transform(x[:, 1:3])