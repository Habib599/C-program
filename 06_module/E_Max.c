#include <stdio.h>
int main()
{
    int i,n,m,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&m);
        if(m>max)
        {
            max=m;
        }
    }
    printf("%d\n",max);
    return 0;
}

