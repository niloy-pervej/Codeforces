#include<stdio.h>
int main(){

    int n,X=0;
    scanf("%d",&n);
    char s[5];
    for(int i=0;i<n;i++){
        scanf("%s",s);
        if(s[0]=='+' || s[1]=='+')
        X++;
        else
        X--;

    }
    printf("%d",X);
    return 0;
}