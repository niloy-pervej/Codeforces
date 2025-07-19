#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>a(n); 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>copy= a; 
        sort(a.begin(),a.end());
        int sum=0;
        for(int i=n-1,j=0;j<=n/2;i--,j++){
            sum=sum+i;
            cout<<sum<<endl;
            cout<<sum+copy[n-i]<<endl;
        }

    }

    
    return 0;
}