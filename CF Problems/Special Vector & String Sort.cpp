#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    vector<int>s(5);
    cin>>str;
    for(int i=0;i<5;i++){
        cin>>s[i];
    }
    sort(str.begin(),str.end());
    sort(s.begin(),s.end());
    cout<<str<<endl;
    for(int i=0;i<5;i++){
        cout<<s[i]<<"\t";
    }

    return 0;
}