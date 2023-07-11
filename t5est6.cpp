// write a program to find HCFand LCM of two number

#include <iostream>
using namespace std;

int main()
{
    int num, num1;
    int hcf, lcm;
    

    int i;
    cin >> num >> num1;

    for (i = 1; i <= num || i <= num1; i++)
    {

        if (num % i == 0 && num1 % i == 0)
        {

            hcf = i;
        }
    }
    cout << "fcg=" << hcf;

lcm=(num*num1)/hcf;
cout<<"lcm="<<lcm;

    return 0;
}