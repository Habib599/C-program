#include <stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        k--; 
        puts("");
    }
    return 0;
}

