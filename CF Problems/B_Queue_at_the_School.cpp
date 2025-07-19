#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    char s[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    char c='B';
    for (int j = 0; j < t; j++)
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                
                s[i - 1] ='G';
                s[i] ='B';
                i++;
        
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<s[i];
    }
    return 0;
}