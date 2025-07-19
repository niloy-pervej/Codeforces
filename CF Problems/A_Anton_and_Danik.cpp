#include<iostream>
using namespace std;

int main(){
    int n,d=0,a=0;
    cin>>n;
    char s[n+1];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    for(int i=0;i<n;i++){
        if(s[i]=='D')
        d++;
        else
        a++;
    }
    //cout<<d<<endl<<a<<endl;
    if(d>a)
    cout<<"Danik";
    else if(a>d)
    cout<<"Anton";
    else
    cout<<"Friendship";
    return 0;
}