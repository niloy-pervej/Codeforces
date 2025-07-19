#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n+1];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(array[i]==1)
        count++;
        
        

    }
    if(count>0)
    cout<<"Hard";
    else
    cout<<"Easy";

    return 0;
}