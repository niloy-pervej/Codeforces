#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s[101];
    int cap=0,sm=0;
    cin>>s;
    int len=strlen(s);
    for(int i=0;i<len;i++){
      if(s[i]>='A'&&s[i]<='Z')
      cap++;
      else
      sm++;
    }
    //cout<<cap<<endl<<sm;
    for(int i=0;i<len;i++){
        if(cap>sm)
        s[i]=toupper(s[i]);
        else
        s[i]=tolower(s[i]);

    }
    cout<<s;

    return 0;
}