#include<iostream>
using namespace std;

int main(){
    int n,k,a[51],temp,ans=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]<a[j]){
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
        }
    }
    }
    for(int i=0;i<n;i++){
       if(a[i]>=a[k-1]&&a[i]>0)
       ans++;

    }
    cout<<ans;
    return 0;
}