#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int N;
    cin>>N;
    long long int array[N+1];
    long long int sum=0;
    for(int i=0;i<N;i++){
        cin>>array[i];
    }
    for(int j=0;j<N;j++){
        sum=sum+array[j];

    }
    sum=abs(sum);
    cout<<sum;
    return 0;
}