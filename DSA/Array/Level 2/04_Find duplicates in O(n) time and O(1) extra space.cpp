#include <iostream>
using namespace std;

void dupilcates(int arr[], int n)
{
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        arr[arr[i] % n] += n;
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] / n > 1)
        {
            cout << j << " ";
        }
    }
    cout << "\n";
}
int main()
{
    int arr[] = {1, 2, 3, 6, 3, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    dupilcates(arr, n);

    return 0;
}
