#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if(a>b+1||(a>b&&a%2==0))
        cout<<"-1";
        else if(x<=y)
        cout<<(b-1)*x;
        else if(a==b+1&&a%2!=0)
        cout<<y;
        else{
            if((b-a)%2==0){
                int d=b-a;
                cout<<x*d/2+y*d/2;
            }
            else if(a%2==0){
                int d=b-a;
                cout<<y*((d/2)+1)+x*d/2;
            }
            else{
                int d=b-a;
                cout<<x*((d/2)+1)+y*d/2;
            }

        }
        cout<<endl;
    }
    return 0;
}