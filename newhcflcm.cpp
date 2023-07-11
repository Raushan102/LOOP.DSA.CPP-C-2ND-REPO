#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, hcf, lcm;
    cin >> a >> b;
    int i;
    int rem;

    for (i = 1; i <= a; i++)
    {

        if (a % i == 0 && b % i == 0)
        {

            rem = i;
        }
    }
    cout << rem << '\n';
    cout << "lcm is="<< (a * b) / rem;
    return 0;
}