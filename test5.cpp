//write aprogram to calculate facturial of given number\

#include <iostream>
using namespace std;

int main()
{
    int n;
    int fact = 1;
    cout << "enter number";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {

        cout << n << "=" << i << "*";
    }

    return 0;
}