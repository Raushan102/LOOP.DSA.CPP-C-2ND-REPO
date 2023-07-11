#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int k = n; k >= i; k--)
        {

            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}