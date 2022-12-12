#Transpose of matrix

A = matrix(c(1,2,3,4,5,6,7,8,9,10), nrow = 5,ncol = 2, byrow = T)
print(A)

B = t(A) #now B will the transpose of A
print(B)