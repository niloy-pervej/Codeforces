#include<iostream>
using namespace std;

int main(){
   long long int n,m,a,t1,t2;
    cin>>n>>m>>a;
  long long  int a1,a2;
  t1=n%a;
    if (t1!= 0)
    {
        a1 = n / a + 1;
    }
    else
    {
        a1 = n / a;
    } 
    t2=m%a;
    if (t2!= 0)
    {
        a2 = m / a + 1;
    }
    else
    {
        a2 = m / a;
    }
   long long int f=a1*a2;
    cout<<f;
    return 0;
}