#include<bits/stdc++.h>
using namespace std;

int main(){
    string p;
    cin>>p;
    int count=0;
    int len=p.length();
    //cout<<p[0];
    for(int i=0;i<len;i++){
        if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
        count++;
    }
    if(count>0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}