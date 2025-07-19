#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char str[101];
    cin>>str;
    int len= strlen(str);
    for(int i=0;i<len;i++)
    str[i]= tolower (str[i]);
    for(int i=0;i<len;i++){
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='y')
        cout<<"."<<str[i];
    }
    return 0;
}