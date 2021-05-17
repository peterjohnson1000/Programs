#include <iostream>
using namespace std;

int main()
{
    //  Inputting just number of rows(n) from the user
    int n;
    int k = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) // this is to count the number of rows
    {
        for (int j = 0; j < i; j++) //this is to count the no of starts in a row
        {
            cout << k << " ";
            k++;
        }
        cout << "\n";
    }
    return 0;
}

/*         1 
           2 3 
           4 5 6 
           7 8 9 10 
           11 12 13 14 15      */
