#include <stdio.h>
int main()
{
    int i,n,a[100][100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

            if(i==j)
            {
                if(a[i][j]!=1) 
                {
                    flag=0;
                    break;
                }
            }
            else if(i!=j)
            {
                if(a[i][j]!=0) 
                {
                    flag=0;
                 break;
                }
            }
        } 
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}

