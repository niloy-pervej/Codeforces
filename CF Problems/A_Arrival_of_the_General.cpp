#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int>b=a;
    sort(b.begin(),b.end());
    int c=b[0];
    int d=b[n-1];
    int e,f;
    for(int i=n-1;i>=0;i--){
        if(c==a[i]){
            e=i+1;
            break;
        }

    }
    for(int i=0;i<n;i++){
        if(d==a[i]){
            f=i+1;
            break;
        }

    }
    //cout<<"&"<<e<<"&"<<f;
    if(e<f)
    cout<<f-1+n-e-1;
    else
    cout<<f-1+n-e;


    
}