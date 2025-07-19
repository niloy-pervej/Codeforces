#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int c=1,b=0;
    cout<<"OK"<<"\n";
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]==a[j]){
                c=0;
                b++;
            }
        }
        if(c==1)
        cout<<"OK";
        else
        cout<<a[i]<<b;
        c=1;
        b=0;
        cout<<"\n";
    }
    return 0;
}