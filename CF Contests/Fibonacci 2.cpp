#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n==1)
    return 0;
    else if(n==3||n==2)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    cout<<fibo(i)<<"  ";

    return 0;
}