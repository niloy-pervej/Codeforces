#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<n*2;i++){
        cin>>a[i];
    }
    // int tem=a[0];
    // a[0]=a[1];
    // a[1]=tem;
    // // for(int i=0;i<n*2;i++){
    // //     cout<<a[i];
    // }
    int count=0;
    for(int i=0;i<2*n;i=i+2){
        for(int j=i+3;j<n*2;j=j+2){
            if(a[i]==a[j])
            count++;

        }
    }
    int count2=0;
    for(int i=1;i<2*n;i=i+2){
        for(int j=i+1;j<n*2;j=j+2){
            if(a[i]==a[j])
            count++;

        }
    }
    cout<<count+count2;
    return 0;
}