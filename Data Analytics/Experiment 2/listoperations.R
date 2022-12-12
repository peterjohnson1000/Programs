# Create a list of 5 strings. Check whether an item exists in the list.
# Illustrate addition and removal of an item in the list

x = list("Parvathi","Paul","Peter","Pramitha")

#exist condition
if("Peter" %in% x == T) {
  print("Peter exist")
} else {
  print("Peter doesn't exist")
}

#doesn't exist condition
if("Johnson" %in% x == T) {
  print("Peter exist")
} else {
  print("Johnson doesn't exist")
}

#addition to the list
x = append(x,"Riya")
print(x)
x[1] = NULL
print(x)