#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int count=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1])
        count++;
    }
    cout<<count;

    return 0;
}