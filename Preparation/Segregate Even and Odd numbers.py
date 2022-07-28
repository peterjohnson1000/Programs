# Link : https://www.geeksforgeeks.org/segregate-even-and-odd-numbers/
# Given an array A[], write a function that segregates even and odd numbers. 
# The functions should put all even numbers first, and then odd numbers.

# Example:  
# Input  = {12, 34, 45, 9, 8, 90, 3}
# Output = {12, 34, 8, 90, 45, 9, 3}

a = [12, 34, 45, 9, 8, 90, 3]

l = 0
r = len(a)-1

while(l < r):
    lchk = a[l] % 2 == 1
    rchk = a[r] % 2 == 0

    if(lchk and rchk):
        a[l],a[r] = a[r],a[l]
    elif(lchk):
        r = r - 1
    else:
        l = l + 1
print(a)