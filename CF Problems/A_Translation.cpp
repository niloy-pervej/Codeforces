#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s[101],t[101];
    char tem[101];
    cin>>s>>t;
    int len=strlen(s);
    for(int i=0;i<len;i++){
            tem[i]=s[len-1-i];
            tem[len]='\0';
        }
        //cout<<tem<<endl<<t<<endl;
        int f=strcmp(tem,t);
        if(f==0)
        cout<<"YES";
        else
        cout<<"NO";

    return 0;
}