#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[5];
        scanf("%s", s);

        int num = 0;
        for (int i = 0; i < 4; i++) {
            num = num * 10 + (s[i] - '0');
        }

        int sqrtX = (int)sqrt(num);
        if (sqrtX * sqrtX != num) {
            printf("-1\n");
            continue;
        }

        for (int a = 0; a <= sqrtX; a++) {
            int b = sqrtX - a;
            printf("%d %d\n", a ,b);
            break;
        }
    }

    return 0;
}