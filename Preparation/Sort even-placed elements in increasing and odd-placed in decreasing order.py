# Link : https://www.geeksforgeeks.org/sort-even-placed-elements-increasing-odd-placed-decreasing-order/

# Input:  arr[] = {0, 1, 2, 3, 4, 5, 6, 7}
# Output: arr[] = {0, 2, 4, 6, 7, 5, 3, 1}
# Even-place elements : 0, 2, 4, 6
# Odd-place elements : 1, 3, 5, 7
# Even-place elements in increasing order : 
# 0, 2, 4, 6
# Odd-Place elements in decreasing order : 
# 7, 5, 3, 1

arr = [0, 1, 2, 3, 4, 5, 6, 7]
evenArr = []
oddArr = []
result = []

for i in arr:
    if i % 2 == 0:
        evenArr.append(i)
    else:
        oddArr.append(i)

evenArr.sort()
oddArr.sort(reverse=True)

result.extend(evenArr)
result.extend(oddArr)

print(result)

# Time Complexity : O(n Log n) 
# Space Complexity : O(n)
