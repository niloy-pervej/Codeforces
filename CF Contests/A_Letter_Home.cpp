#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
     int n,s;
     cin>>n>>s;
     int a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
     int c=abs(a[n-1]-a[0]);
     int d=abs(s-a[0]);
     int e=abs(a[n-1]-s);
     if(d>e)
     cout<<c+e<<endl;
     else
     cout<<c+d<<endl;
}
}