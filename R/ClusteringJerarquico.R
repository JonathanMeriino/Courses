#Clustering Jerarquico

library(cluster)

principal<-function(){

#cargar los datos del archivo
textura_comidas <- read_csv("food-texture.csv")
View(textura_comidas)

textura_comidas<-textura_comidas[, -1]

#Exlorar los datos

#Despliega la estructura de los datos
str(textura_comidas)

#Obtenci?n de medidas estad?sticas
summary(textura_comidas)


#Valores na

any(is.na(textura_comidas))

#Convertir los datos  a un DF

texComida <- as.data.frame(scale(textura_comidas))

summary(texComida)

#Se aplica la medida de distancia para obtener la matriz de distancia

dist_mat <- dist(texComida, method = 'euclidean')

#Obtenci?n de los grupos

grupos<-hclust(dist_mat, method = "ward.D")

plot(grupos)


#Trazar la linea de corte y mostrar rectangulo en los grupos

lineaCorte<-cutree(grupos, k = 3)

plot(grupos)
rect.hclust(grupos , k = 3, border = 2:6)
abline(h = 3, col = 'red')


}