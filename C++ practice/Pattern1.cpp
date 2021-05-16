#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++) // this is to count the number of rows
    {
        for (int j = 1; j <= 4; j++) //this is to count the no of starts in a row
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
