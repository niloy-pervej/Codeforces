#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100001];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    int ans=sum/4;
    if(sum%4==0)
    cout<<ans;
    else 
    cout<<ans+1;
    return 0;
}