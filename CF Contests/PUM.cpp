#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        for(int j=1;j<=4;j++){
            int x=4*i+j;
            if(x%4!=0)
            cout<<x<<" ";
            else
            cout<<"PUM";
        }
        cout<<endl;
    }
    return 0;
}