#include <stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
    int i,n,x,y;
    scanf("%d %d",&x,&y);
   
    printf("%d\n",sum(x,y));
    return 0;
}

