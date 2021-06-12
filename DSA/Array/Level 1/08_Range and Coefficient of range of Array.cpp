//Range: Difference between the maximum value and the minimum value
//Coefficient of Range: (Max – Min) / (Max + Min).

#include <iostream>
using namespace std;

void cal(int arr[], int n)
{
    int max = 0, min = arr[0];
    float range, coef;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    range = max - min;
    coef = range / (max + min);
    cout << "Max is: " << max << " - Min is: " << min << "\n";
    cout << "Range is: " << range << "\n";
    cout << "Coefficient of Range is: " << coef << "\n";
}

int main()
{
    int arr[] = {5, 10, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cal(arr, n);

    return 0;
}
