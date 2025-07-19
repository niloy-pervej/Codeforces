#include<bits/stdc++.h>
using namespace std;

int main(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    vector<int>a(4);
    a[0]=s1;
    a[1]=s2;
    a[2]=s3;
    a[3]=s4;
    int count=0;
    sort(a.begin(),a.end());
    // for(int i=0;i<4;i++){
    //     cout<<a[i]<<endl;
    // }
    for(int i=1;i<4;i++){
        if(a[i]==a[i-1])
        count++;
    }
    cout<<count;
 
    return 0;
}