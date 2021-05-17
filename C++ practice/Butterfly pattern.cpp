#include <iostream>
using namespace std;

int main()
{
    //  Inputting just number of rows(n) from the user
    int n;
    cin >> n;
    // Upperpart of the butterfly
    for (int i = 1; i <= n; i++) // this is to count the number of rows
    {
        for (int j = 0; j < i; j++) //this is to count the no of starts in a row
        {
            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (int j = 0; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    // Lowerpart of the butterfly
    for (int i = n; i >= 0; i--) // this is to count the number of rows
    {
        for (int j = 0; j < i; j++) //this is to count the no of starts in a row
        {
            cout << "* ";
        }
        int space = 2 * n - 2 * i;
        for (int j = 0; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

/*         *                   * 
           * *               * * 
           * * *           * * * 
           * * * *       * * * * 
           * * * * *   * * * * * 
           * * * * *   * * * * * 
           * * * *       * * * * 
           * * *           * * * 
           * *               * * 
           *                   *       */
