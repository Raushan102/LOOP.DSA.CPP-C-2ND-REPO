#include <iostream>
using namespace std;

int main()
{
    int n,sign=-1;
    float sume = 0;
    cout << "enter number";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
     sign=sign*(-1);
        sume = sume + sign*1.0/i;
    }
    cout << sume;
    return 0;
}