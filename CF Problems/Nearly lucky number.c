#include <stdio.h>
int main()
{
    int n, num, temp;
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        num = temp % 10;
        if (num != 4 && num != 7)
        {
            printf("NO");
            return 0;
        }
        temp = temp / 10;
    }
    printf("YES");
    return 0;
}