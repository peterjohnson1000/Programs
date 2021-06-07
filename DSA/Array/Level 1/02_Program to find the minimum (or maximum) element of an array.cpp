#include <iostream>
using namespace std;

int findMax(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, n);
    cout << "Maximum Element of the Array is: " << max << "\n";
    int min = findMin(arr, n);
    cout << "Minimum Element of the Array is: " << min << "\n";
    return 0;
}
