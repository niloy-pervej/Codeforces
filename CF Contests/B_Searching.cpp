#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int b=0;
    int array[N+1];
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    int X;
    cin>>X;
    for(int i=0;i<N;i++){
        if(array[i]==X){
            b++;
            cout<<i;
            break;
        }
    }
    if(b==0)
    cout<<"-1";
}