#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(int i=1;i<=n;i++) //row
    {
        for(int j=1;j<=s;j++) //space
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)// kaj
        {
            printf("*");
        }
        // line sesh
        s--;
        k+=2;
        printf("\n");
    }

    return 0;
}