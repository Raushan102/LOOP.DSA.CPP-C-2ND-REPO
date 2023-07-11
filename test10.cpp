#include <iostream>
using namespace std;
int fact(int num);

int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    int ans = fact(n);
    cout << "facturial is" << ans << '\n';
    return 0;
}

int fact(int num)
{
    int facturial=1;

    for (int i = 1; i <= num; i++)
    {
        facturial = facturial * i;
    }
    return facturial;
}