#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(; n > 0; n = n / 10)
    {
        int digit = n % 10;

        rev = rev * 10 + digit;
    }

    cout << "Reverse = " << rev << endl;

    return 0;
}