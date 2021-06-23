#include <iostream>
using namespace std;

void cyclic(int arr[], int n)
{
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        last = arr[i];
    }
    for (int j = n - 1; j >= 0; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[0] = arr[last];
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << "\n";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cyclic(arr, n);

    return 0;
}
