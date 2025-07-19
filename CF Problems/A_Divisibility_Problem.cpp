#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long a,b;
    cin>>a>>b;
    for(int i=0;i<t;i++){

        int count=0;
        while(a%b!=0){
            a++;
            count++;
        }
        cout<<count;
    }
    return 0;
}