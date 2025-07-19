#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = s.length();
    // cout<<s[1]<<s[4]<<endl;
    char a[10001];
    for (int i = 1, j = 0; i < len; i = i + 3, j++)
    {
        a[j] = s[i];
    }
    int len2 = strlen(a);
    sort(a, a + len2);
    //    for(int i=0;i<len2;i++){
    //     cout<<a[i];
    //    }
    if (len > 2)
    {
        int count = 1;
        for (int i = 1; i < len2; i++)
            if (a[i] != a[i - 1])
            {
                count++;
            }
        cout << count;
    }
    else
        cout << "0";
    return 0;
}