#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 8, 8, 12, 14, 8, 8};
    int x = 8, k = 2, r = k; // x is the Key and k is the Segement partitioner
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i = i + k)
    {
        for (int j = 0; j < k; j++) // k = 3
        {
            if (arr[i + j] == x)
            {
                break;
            }

            if (j == k - 1)
            {
                cout << "False \n";
                exit(0);
            }
        }
    }
    cout << "True \n";
    return 0;
}
