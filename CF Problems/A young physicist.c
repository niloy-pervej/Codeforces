#include<stdio.h>
int main()
{
    int n,x,y,z,sumZ=0,sumX=0,sumY=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&x,&y,&z);
        sumX=sumX+x;
        sumY=sumY+y;
        sumZ=sumZ+z;
    }
    if(sumX==0&&sumY==0&&sumZ==0)
    printf("YES");
    else
    printf("NO");
}