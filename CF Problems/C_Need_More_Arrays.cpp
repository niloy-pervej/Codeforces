#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int count=0;
        for(int j=0;j<n-1;j++){
            if((a[j]+1)<a[j+1])
            count++;
            else if(a[j]==a[j+1])
            count--;
        }
        cout<<((n-count+1)/2)+count<<"\n";
    }
    return 0;
}