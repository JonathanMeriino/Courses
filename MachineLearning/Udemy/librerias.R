#Plantilla para el pre procesado de datos
#importar el dataset
dataset = read.csv('Data.csv')



#dividir los datos en conjunto de entrenamiento y conjunot de test
#install.packages("caTools")
set.seed(123)
split = sample.split(dataset$Purchased, SplitRatio = 0.8)
train_set = subset(dataset, split==TRUE)
test_set = subset(dataset, split==FALSE)
#escalado de valores

#train_set[,2:3] = scale(train_set[,2:3])
#test_set[,2:3] = scale(test_set[,2:3])


