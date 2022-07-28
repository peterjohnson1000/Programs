# https://www.hackerrank.com/challenges/closest-numbers/problem?isFullScreen=true
# Input : [5,4,3,2,1]
# Sort : [1,2,3,4,5]
# Output : [1,2,2,3,3,4,4,5]

arr = [5,4,3,2,1]
result = []
mindiff = 9999999999
arr.sort()
# [1,2,3,4,5]
for i in range(1, len(arr)):
    d = abs(arr[i] - arr[i-1])
    if d < mindiff:
        mindiff = d
        result = [arr[i-1],arr[i]]
    elif d == mindiff:
        result.extend([arr[i-1],arr[i]])
print(result) 