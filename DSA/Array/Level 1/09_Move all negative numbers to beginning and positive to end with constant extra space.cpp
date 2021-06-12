// Done using Quick Sort Partition in which a pivot element is selected (0 in this case because we need to filter the negative numbers) and then anything
// less than the pivot is swapped. 

#include <iostream>
using namespace std;

void positive(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0) //pivot = 0
        {
            j++;
            swap(arr[i], arr[j]);
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    positive(arr, n);

    return 0;
}
