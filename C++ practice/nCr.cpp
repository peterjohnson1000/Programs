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
    int n, r;
    cout << "Enter Number: \n";
    cin >> n >> r;

    int ncr = fact(n) / (fact(r) * fact(n - r));
    cout << ncr << "\n";

    return 0;
}
