#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<char>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
 }
 for(int i=0;i<n;i++){
    s[i]=tolower(s[i]);
 }
 int count=1;
 sort(s.begin(),s.end());
 for(int i=1;i<n;i++){
     if(s[i]!=s[i-1]){
         count++;
        }
    }
    // for(int i=0;i<n;i++){
    //   cout<<s[i]<<"\t";
    // }
    // cout<<count;
    if(count==26)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}