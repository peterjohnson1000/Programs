#include <iostream>
using namespace std;

void fibo(int n)
{
    int first = 0;
    int second = 1;
    int nextterm = 0;

    for (int i = 1; i <= n; i++)
    {
        cout << first << second;
        nextterm = first + second;
        first = second;
        second = nextterm;
        cout << " " << nextterm << " ";
    }
}

int main()
{
    int n;
    cout << "Enter Number: \n";
    cin >> n;

    fibo(n);

    return 0;
}

// If we have got a number 5 
// The fibonacci series of the number 5 is 01 1 11 2 12 3 23 5 35 8
// Therefor it's the sum of the previous two numbers
