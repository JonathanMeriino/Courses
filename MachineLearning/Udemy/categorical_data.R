#Plantilla para el pre procesado de datos
#importar el dataset
dataset = read.csv('Data.csv')


#codificar las variables categoricas
dataset$Country = factor(dataset$Country,
                         levels = c("France","Spain","Germany"),
                         labels = c(1,2,3))
dataset$Purchased = factor(dataset$Purchased,
                           levels = c("Yes","No"),
                           labels = c(1,0))