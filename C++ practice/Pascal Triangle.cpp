#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;
    cout << "Enter Number: \n";
    cin >> n;

    for (int i = 0; i < n; i++) //counts the rows
    {
        for (int j = 0; j <= i; j++) //counts the columns
        {
            int ncr = fact(i) / (fact(j) * fact(i - j)); // n=i r=j
            cout << ncr << " ";
        }
        cout << "\n";
    }

    return 0;
}

/*     1 
        1 1 
        1 2 1 
        1 3 3 1 
        1 4 6 4 1   */
