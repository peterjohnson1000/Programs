#include <iostream>
using namespace std;

int main()
{
    //  Inputting just number of rows(n) from the user
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) // this is to count the number of rows
    {
        for (int j = 1; j <= i; j++) //this is to count the no of starts in a row
        {
            if ((i + j) % 2 == 0)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}

/*        1 
          0 1 
          1 0 1 
          0 1 0 1 
          1 0 1 0 1        */
