// In this program since we are provided with an un-sorted array we traverse through the array in a linear manner and increments the count when a match is found.

#include <iostream>
using namespace std;

void stringOccurence(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            count++;
        }
    }
    cout << "Occurence of " << k << " is " << count << " times \n";
}

int main()
{
    int k;
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter the value for K: ";
    cin >> k;
    stringOccurence(arr, n, k);

    return 0;
}
