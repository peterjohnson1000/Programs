#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int orginaln = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        int cube = lastdigit * lastdigit * lastdigit;
        sum += cube;
        n = n / 10;
    }

    if (sum == orginaln)
    {
        cout << "Its an Armstrong Number \n";
    }
    else
    {
        cout << "Its not an Armstrong Number \n";
    }
    return 0;
}

// 1 5 3
// 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
// So if the inputed number and the individual cube of the number is same then its called as an armstrong number. 
