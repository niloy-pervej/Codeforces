#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[101];
    cin >> s;

    int len = strlen(s);
    int h = -1, e = -1, l1 = -1, l2 = -1, o = -1;

    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'h' && h == -1)
        {
            h = i;
        }
        else if (s[i] == 'e' && h != -1 && e == -1)
        {
            e = i;
        }
        else if (s[i] == 'l' && e != -1 && l1 == -1)
        {
            l1 = i;
        }
        else if (s[i] == 'l' && l1 != -1 && l2 == -1)
        {
            l2 = i;
        }
        else if (s[i] == 'o' && l2 != -1 && o == -1)
        {
            o = i;
        }
    }

    if (h != -1 && e != -1 && l1 != -1 && l2 != -1 && o != -1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}