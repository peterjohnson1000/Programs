# R program for matrix multiplication

mat1 = matrix(1:4, nrow=2, ncol=2, byrow = T)
mat2 = matrix(5:8, nrow=2, ncol=2, byrow = T)

#matrix multiplication 
print(mat1 %*% mat2)