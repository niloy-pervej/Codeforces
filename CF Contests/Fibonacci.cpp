#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum;
    int x = 0, y = 1;
    if (n != 1)
    {
        cout << "0 " << "1 ";

        for (int i = 1; i < n - 1; i++)
        {
            sum = x + y;
            cout << sum << " ";
            x = y;
            y = sum;
        }
    }
    else
        cout << "0";

    return 0;
}