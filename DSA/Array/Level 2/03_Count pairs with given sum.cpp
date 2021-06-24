// Given an array of integers, and a number ‘sum’, find the number of pairs of integers in the array whose sum is equal to ‘sum’.
// Input  :  arr[] = {1, 5, 7, -1}, 
// sum = 6
// Output :  2

#include <iostream>
using namespace std;

void sumOfPairs(int arr[], int n, int sum)
{
    int sumCount = 0;
    for (int i = 0; i < n; i++)  // This loop fixes the first element as target. 
    {
        for (int j = i + 1; j < n; j++) // This loop compares the target with other elements to find out sum pairs. 
        {
            if (arr[i] + arr[j] == sum)
            {
                sumCount += 1;
            }
        }
    }
    cout << sumCount;
    cout << "\n";
}
int main()
{
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    sumOfPairs(arr, n, sum);

    return 0;
}
