#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    for (int i = 1; i <= row; i++) // this is to count the number of rows
    {
        for (int j = 1; j <= col; j++) //this is to count the no of starts in a row
        {
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << "\n";
    }
    return 0;
}

/*   * * * * 
     *     * 
     *     * 
     *     * 
     * * * *    */
