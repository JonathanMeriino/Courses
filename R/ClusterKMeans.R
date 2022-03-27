#Algoritmo KMeans
install.packages("factoextra")

library(tidyverse)  # Manipulación de datos
library(cluster)    # Algoritmos de clusterización
library(factoextra) #Algoritmos de clusterización y visualización
library(gridExtra)

principal<-function(){
  
  #cargar los datos del archivo
  textura_comidas <- read_csv("C:/Users/Cristal/Downloads/food-texture.csv")
  View(textura_comidas)
  
  textura_comidas<-textura_comidas[, -1]
  
  
  #Exlorar los datos
  
  #Despliega la estructura de los datos
  str(textura_comidas)
  
  #Obtención de medidas estadísticas
  summary(textura_comidas)
  
  
  #Valores na
  
  any(is.na(textura_comidas))
  
  #Convertir los datos  a un DF
  
  texComida <- as.data.frame(scale(textura_comidas))
  
  summary(texComida)
  
  #Se aplica la medida de distancia para obtener la matriz de distancia
  
  dist_mat <- dist(texComida, method = 'euclidean')
  
#Se aplica el algoritmo K-Means
  
  gruposK2 <- kmeans(dist_mat, centers = 2, nstart = 25)
 
  #str(gruposK2)
  
  print(gruposK2)
  
  #Graficar los grupos
  fviz_cluster(gruposK2, data = dist_mat)

  

}