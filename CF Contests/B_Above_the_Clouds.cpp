#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        int count=0;
        cin>>s;
        if(s[0]==s[n-1])
        count=count-1;
        sort(s.begin(),s.end());
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1])
            count++;
        }
        if(count>0)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;   
    }
}