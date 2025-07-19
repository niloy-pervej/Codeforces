#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string a,b,c;
    cin>>a>>b;
    int len=a.length();
    c.resize(len);
    for(int i=0,j=0;i<=len;i++,j++){
         if(a[i]==b[i])
         c[i]='0';
         else
         c[i]='1';
    }
    //for(int i=0;i<len;i++)
    
    cout<<c<<endl;
    return 0;
}