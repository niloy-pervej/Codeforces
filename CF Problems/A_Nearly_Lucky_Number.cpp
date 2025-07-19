#include<iostream>
using namespace std;
 
int main(){
    long long int n;
    int rem,count=0;
    cin>>n;
    long long int temp=n;
    while( temp!=0){
        rem= temp%10;
         temp= temp/10;
    if(rem==4||rem==7)
    count++;
}
//cout<<count;
if(count==4||count==7)
cout<<"YES";
else
cout<<"NO";
    return 0;
}