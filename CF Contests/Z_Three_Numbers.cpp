#include<bits/stdc++.h>
using namespace std;

int main(){
    int K,S;
    int count=0;
    cin>>K>>S;
    for(int X=0;X<=K;X++){
        for(int Y=0;Y<=K;Y++){
            int Z=S-X-Y;
            if(Z>=0&&Z<=K)
            count++;
        }
    }
    cout<<count;
    return 0;
}