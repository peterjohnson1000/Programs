#include <iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;

    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x, y, z;
    cout << "Enter Number: \n";
    cin >> x >> y >> z;

    bool condition = check(x, y, z);

    if (condition == true)
    {
        cout << "Pythagorean Triplet \n";
    }
    else
    {
        cout << "Not a Pythagorean Triplet \n";
    }

    return 0;
}

/*     1 
        1 1 
        1 2 1 
        1 3 3 1 
        1 4 6 4 1   */
