#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s1[101], s2[102];
    scanf("%s%s", s1, s2);
    for (int i = 0; s1[i] != '\0'; i++)
        s1[i] = tolower(s1[i]);
    for (int i = 0; s2[i] != '\0'; i++)
        s2[i] = tolower(s2[i]);
    int result = strcmp(s1, s2);
    if (result == 0)
        printf("0");
    else if (result > 0)
        printf("1");
    else
        printf("-1");
    return 0;
}