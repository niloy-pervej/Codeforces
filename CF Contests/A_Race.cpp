#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,x,y;
        cin>>a>>x>>y;
        int b=abs(a-x),c=abs(a-y),d=abs(x-y);
        int e;
        if(d%2==0)
        e=d/2;
        else
        e=d/2+1;
        //cout<<e;
        if(b>e&&c>e)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}