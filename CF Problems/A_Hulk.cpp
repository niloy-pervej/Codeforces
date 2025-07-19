#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string a,b,c;
    // string x="that",y="it";
    a=" I love that";
    b=" I hate that";
    if(n%2==0){
        for(int i=2;i<=n;i=i+2){
            c=c+b+a;
        }
        int len=c.length();
        c.replace(len-4,4,"it");
        cout<<c;

    }
    else{
        string t="I hate that";
        for(int i=1;i<n;i=i+2){
            t=t+a+b;
        }
        int len=t.length();
       t.replace(len-4,4,"it");
        cout<<t;

    }
    return 0;
}