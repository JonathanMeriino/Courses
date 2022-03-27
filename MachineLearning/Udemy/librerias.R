#Plantilla para el pre procesado de datos
#importar el dataset
dataset = read.csv('Data.csv')

#Tratamiento de los valores NA

dataset$Age = ifelse(is.na(dataset$Age), 
                     ave(dataset$Age,FUN= function(x) mean(x,na.rm=TRUE)),
                     dataset$Age)
dataset$Salary = ifelse(is.na(dataset$Salary), 
                     ave(dataset$Salary,FUN= function(x) mean(x,na.rm=TRUE)),
                     dataset$Salary)
#codificar las variables categoricas
dataset$Country = factor(dataset$Country,
                         levels = c("France","Spain","Germany"),
                         labels = c(1,2,3))
