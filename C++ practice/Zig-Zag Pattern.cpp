#include <iostream>
using namespace std;

int main()
{
    //  Inputting just number of rows(n) from the user
    int n;
    cin >> n;
    int temp = 1;
    for (int i = 1; i <= 3; i++) // this is to count the number of rows
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 4 == 0)
            {
                cout << "*";
            }
            if (i == 2 && j % 4 == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}

/*               *    *   
               *  * *  * 
              *    *    *           */
