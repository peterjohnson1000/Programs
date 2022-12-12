# Write an R program to create a vector which contains 10 random integer values
# between -50 and +50. (Hint : sample())

v = sample(-50:50, replace = T)
print(v)