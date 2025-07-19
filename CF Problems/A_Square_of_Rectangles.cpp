#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l1,b1,l2,b2,l3,b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;
        int d=l1*b1+l2*b2+l3*b3;
        int t=0;
        if(l1>b1){
            if(l1>=b1+b2&&l1>=b1+b3)
            t++;
        }
        else{
            if(b1>=l1+l2&&b1>=l1+l3)
            t++;
        }
        int count=0;
        for (int i = 0; i * i <= d; ++i) {
        if (i * i == d){
          count++;
          break;
        }}
        if(count>0&&t>0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}