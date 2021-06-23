#include <iostream>
using namespace std;

void missingInt(int arr[], int n)
{
    int summation = (n + 1) * (n + 2) / 2;  // Summation formula

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int missing = summation - sum;
    cout << "The missing element is: " << missing;
    cout << "\n";
}
int main()
{
    int arr[] = {1, 2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    missingInt(arr, n);

    return 0;
}
