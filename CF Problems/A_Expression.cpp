#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x1=a+b*c,x2=a*b+c,x3=a*b*c,x4=a+b+c,x5=(a+b)*c,x6=a*(b+c);
    int max=0;
    int f[6];
    f[0]=x1;f[1]=x2;f[3]=x3;f[4]=x4;f[5]=x5;f[2]=x6;
    for(int i=0;i<6;i++){
        if(f[i]>max)
        max=f[i];
    }
    cout<<max;
 
    return 0;
}