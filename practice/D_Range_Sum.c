#include <stdio.h>
int sum(int a, int b)
{
    int sum1=0;
    for (int i = a; i <=b; i++)
    {
        sum1+=i;
    }
    return sum1;
}
int main()
{
    int i,n,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

       scanf("%d %d",&a,&b);
       printf("%d\n",sum(a,b));
    }
    return 0;
}

