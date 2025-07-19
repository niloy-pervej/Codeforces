#include<bits/stdc++.h>
using namespace std;
int number(int N){
    for(int i=1;i<=N;i++){
        if(i!=N)
        cout<<i<<" ";
        else
        cout<<i;
    }

}

int main(){
    int N;
    cin>>N;
    number(N);
    
    return 0;
}