#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int i=0,len=0;
    while(s[i]!='\0'){
        i++;
        len++;
    }
    sort(s.begin(),s.end());
    //cout<<s;
    int count=1;
    for(int i=1;i<len;i++){
        if(s[i]!=s[i-1])
        count++;
    }
   if(count%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
    return 0;
}