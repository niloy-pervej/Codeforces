#include <bits/stdc++.h>
using namespace std;

int main()
{

    int y;
    cin >> y;
    string a;
    for (int i = y + 1; i <= 9012; i++)
    {
        int count = 0;
        a = to_string(i);
        sort(a.begin(), a.end());
        for (int j = 1; j < 4; j++)
        {
            if (a[j] == a[j - 1])
            {

                count++;
                break;
            }
        }
        if (count == 0)
        {

            cout << i;
            break;
        }
    }
    return 0;
}