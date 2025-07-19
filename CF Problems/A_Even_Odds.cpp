#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin >> n>>k;
    vector<int>a(n);
    long long count=0;
    for (int i = 1,j=0; i <= n; i=i+ 2,j++)
    {
        a[j]=i;
        count++;

    }
    for (int i = 2,j=count; i <= n; i=i+ 2,j++)
    {
       a[j]=i;
    }
    cout<<a[k-1];
}