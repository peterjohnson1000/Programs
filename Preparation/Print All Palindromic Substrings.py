# Print All Palindromic Substrings
# Example
# Input = abcc
# Output = 
# a
# b
# c
# cc
# c

str1 = "abcc"
    
for i in range(len(str1)):
    for j in range(i + 1, len(str1) + 1):
        string = str1[i:j]
        if(string == string[::-1]):
            print(string)