#include<bits/stdc++.h>
using namespace std;
bool lucky(int n){
    while(n!=0){
        int rem=n%10;
        n=n/10;
        if(rem!=7&&rem!=4)
        return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<n;i++){
        if(lucky(i)&&n%i==0)
         count=1;
    }
    if(lucky(n)||count==1)
    cout<<"YES";
    else
    cout<<"NO";
    
    return 0;
}