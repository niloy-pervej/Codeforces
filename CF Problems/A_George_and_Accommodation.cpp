#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a1[n+1],a2[n+1];
    for(int i=0;i<n;i++){
        cin>>a1[i];
        cin>>a2[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(a2[i]>a1[i]+1)
        count++;
    }
    cout<<count;
    return 0;
}