#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char a[101];
    int count=0;
    cin>>a;
    int len=strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]=='0'&&a[i+1]=='0'&&a[i+2]=='0'&&a[i+3]=='0'&&a[i+4]=='0'&&a[i+5]=='0'&&a[i+6]=='0')
        count++;
        else if(a[i]=='1'&&a[i+1]=='1'&&a[i+2]=='1'&&a[i+3]=='1'&&a[i+4]=='1'&&a[i+5]=='1'&&a[i+6]=='1')
       count++;
    }
    if(count>0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
      