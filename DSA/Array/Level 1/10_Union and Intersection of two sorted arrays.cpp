#include <iostream>
using namespace std;

void Union(int arr[], int arr2[], int n, int m)
{
    cout << "Union - ";

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] < arr2[j])
        {
            cout << arr[i++];
        }
        else if (arr2[j] < arr[i])
        {
            cout << arr2[j++];
        }
        else
        {
            cout << arr[i++];
            j++;
        }
    }
    while (i < n)
    {
        cout << arr[i++];
    }
    while (j < m)
    {
        cout << arr2[j++];
    }
    cout << "\n";
}
void Inter(int arr[], int arr2[], int n, int m)
{
    cout << "Intersection - ";

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr[i])
        {
            j++;
        }
        else
        {
            cout << arr[i++];
            j++;
        }
    }
    cout << "\n";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);
    Union(arr, arr2, n, m);
    Inter(arr, arr2, n, m);

    return 0;
}
