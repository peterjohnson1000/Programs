#include <iostream>
using namespace std;

int main()
{
    //  Inputting both rows and columns from the user. (Method 2)
    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++) // this is to count the number of rows
    {
        for (int j = 1; j <= col; j++) //this is to count the no of starts in a row
        {
            cout << "* ";
        }
        col--;
        cout << "\n";
    }
    return 0;
}

//  Inputting just number of rows(n) from the user. (Method 2)
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) // this is to count the number of rows
    {
        for (int j = 1; j <= i; j++) //this is to count the no of starts in a row
        {
            cout << "* ";
        }
        n--;
        cout << "\n";
    }

/*      * * * * * 
        * * * * 
        * * * 
        * * 
        *                       */
