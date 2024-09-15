#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for (j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        for(j=n-2;j<=i+1;j++)
            printf("*");  
       
       puts("");
    }
    return 0;
}

