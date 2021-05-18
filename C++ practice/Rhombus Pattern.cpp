#include <iostream>
using namespace std;

int main()
{
    //  Inputting just number of rows(n) from the user
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // this is to count the number of rows
    {
        for (int j = 1; j <= 1; j++) //this is to count the no of starts in a row
        {
            for (int k = 1; k <= n - i; k++)
            {
                cout << " ";
            }
            for (int l = 1; l <= n; l++)
            {
                cout << "* ";
            }
        }
        cout << "\n";
    }

    return 0;
}

/*          * * * * * 
           * * * * * 
          * * * * * 
         * * * * * 
        * * * * *         */
