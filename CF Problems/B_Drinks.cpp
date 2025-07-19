#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    double sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
    }
    //cout<<sum<<endl;
    double result=sum/n;
    cout<<fixed<<setprecision(12)<<result;
    return 0;
}