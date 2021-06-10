#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Kth smallest element is: " << arr[k - 1];
    cout << "\n";
}

int main()
{
    int k;
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the value for K: ";
    cin >> k;
    bubbleSort(arr, n, k);

    return 0;
}
