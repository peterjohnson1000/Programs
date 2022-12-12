# Write an R program to find the factors of a given number using function

factors = function(num) {
  for(i in 1:num) {
    if((num %% i) == 0) {
      print(i)
    }
  }
}

factors(12)
