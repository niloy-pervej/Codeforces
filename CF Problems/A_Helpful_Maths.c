#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    char temp;
    
    scanf("%s", s);
    int len=strlen(s);
        for (int i = 0;i<len; i = i + 2)
        {
            for (int j = i+2;j<len ; j=j+2)
            {
                if (s[i] > s[j])
                {
                   temp=s[j];
                   s[j]=s[i];
                   s[i]=temp;
                }
            }
        }

    printf("%s", s);
}