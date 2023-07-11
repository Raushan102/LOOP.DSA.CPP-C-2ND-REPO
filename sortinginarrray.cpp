#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter size of array";
    cin >> n;

    int i, j, key, arrr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arrr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arrr[j] < arrr[i])
            {
                int temp = arrr[j];
                arrr[j] = arrr[i];
                arrr[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arrr[i] << " ";
    }

    return 0;
}
