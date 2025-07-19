#include<iostream>
using namespace std;

void g(int a , int b){
    a = 50,b = 33;
}

void f(int &a, int &b){
    g(b,a);
}
int main(){
    int n = 6, m = 7;

    f(n,m);
    cout<<n<<" "<<m<<endl;

    return 0;

}