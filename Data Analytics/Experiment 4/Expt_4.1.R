#histogram
hist(iris$Sepal.Length, xlab="Petal Width", ylab ="Sepal Width",
     main="Width Data")

#boxplot
boxplot(Sepal.Width ~ Petal.Width, data = iris, xlab="Petal Width", 
        ylab ="Sepal Width",main="Width Data")

#barplot
barplot(iris$Sepal.Length, xlab="Petal Width", ylab ="Sepal Width",
        main="Width Data")

#scatterplot
plot(iris$Sepal.Length, xlab="Petal Width", ylab ="Sepal Width",
     main="Width Data")