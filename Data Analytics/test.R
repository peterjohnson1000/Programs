#vectors
friends = c("Adarsh","Aman","Paul","Parvathi")
print(friends)
class(friends)

#list
carsiown <- list("Brio",2013,"City",2014,"Wagon-R",2022)
print(carsiown)
class(carsiown)

#Matrix
mymatrix = matrix(data = c(1,2,3,4,5,6), nrow = 2, byrow = T)
print(mymatrix)
print(mymatrix[2,2])

#Dataframe
car_name = c("City","Brio","R-Wagon")
car_model = c(2014,2013,2022)
car_number = c(1000,2010,0009)
car_owner = c("Dad","Peter","Mom")
my_garagedata.frame(carname = car_name, carmodel = car_model, carnumber = car_number, carowner = car_owner)
print(my_garage)
print(my_garage$carname)

#Conditional Statements
vec3 = c(10,20,30,40,50)
print(vec3)
if(vec3[1] == 10) {
  vec3[1] = 1
}
print(vec3)

#loop
#whileloop
i = 0
while(i < 10) {
  i = i + 1
}
print(i)
#forloop
vec4 = c(10,20,30,40,50)
for(i in vec4) {
  print(i)
}

#function
myname <- function(name) {
  print(name)
}
myname("peter")

#dplyr library
library(dplyr)
#select
iris %>% select("Sepal.Length") -> sepal_len
View(sepal_len)
iris %>% select("Sepal.Length","Species") -> sepal_len_spec
View(sepal_len_spec)
#filter
iris %>% filter(Species == "virginica") -> virginica
View(virginica)
iris %>% filter(Sepal.Length > 5 & Species == "virginica") -> virginica_sepalL5
View(virginica_sepalL5)
#mutate
iris -> iris_copy
iris_copy %>% mutate(Sepal.Total = Sepal.Length + Sepal.Width) -> iris_copy
View(iris_copy)

#visulization
library(ggplot2)
ggplot(data = diamonds, aes(x=price)) + geom_histogram(fill="red", col="black")