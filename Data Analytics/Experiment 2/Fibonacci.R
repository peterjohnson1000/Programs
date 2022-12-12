# Write an R program to get the first 10 fibonacci numbers.

fibo <- numeric(10)
fibo[1] = fibo[2] = 1

for(i in 3:10) {
  fibo[i] = fibo[i - 2] + fibo[i - 1]
}

print(fibo)