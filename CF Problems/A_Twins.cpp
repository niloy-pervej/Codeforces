#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2=sum2+a[i];
    }
    int sum=0,count=1;
    //cout<<sum2<<endl;
        for(int i=n-1;i>=0;i--){
            sum=sum+a[i];
            sum2=sum2-a[i];
             if(sum<=sum2)
            count++;
        }
    cout<<count;
    return 0;
}