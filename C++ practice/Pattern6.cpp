#include <iostream>
using namespace std;

int main()
{
    //  Inputting just number of rows(n) from the user
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) // this is to count the number of rows
    {
        for (int j = 1; j <= i; j++) //this is to count the no of starts in a row
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}

/*        1 2 3 4 5 
          1 2 3 4 
          1 2 3 
          1 2 
          1       */
