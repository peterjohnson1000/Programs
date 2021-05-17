#include <iostream>
using namespace std;

int main()
{
    //  Inputting just number of rows(n) from the user
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // this is to count the number of rows
    {
        for (int j = 0; j < i; j++) //this is to count the no of starts in a row
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}

/*         1 
           2 2 
           3 3 3 
           4 4 4 4 
           5 5 5 5 5      */
