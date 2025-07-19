#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len=s.length();
    int count = 1;
    sort(s.begin(),s.end());
    for(int i=1;i<len;i++){
        if(s[i]!=s[i-1])
        count++;
    }
    cout<<count;
    return 0;
}