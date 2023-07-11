#include <iostream>
using namespace std;

int main()
{
    int i;
    char c;

    for (i = 0; i <= 255; i++)
    {

        c = i;

        cout <<i<<"ascll value=" << char(c) << '\n';
    }
    return 0;
}