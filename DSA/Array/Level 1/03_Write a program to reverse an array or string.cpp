#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int end = n - 1;

    for (int start = 0; start < end; start++)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << "\n";
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);

    return 0;
}

//for reversing string the data type of the array should be changed !
