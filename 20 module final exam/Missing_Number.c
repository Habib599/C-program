#include <stdio.h>
int main()
{
    int i,n,a[100][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<1;j++)
        {
            int sum=0;
            sum=a[i][j]-(a[i][j+1]+a[i][j+2]+a[i][j+3]);
            printf("%d\n",sum);
        } 
    }
    return 0;
}

