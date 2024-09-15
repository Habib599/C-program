#include <stdio.h>
#include <stdlib.h>
int my_abs(int a)
{
    int b=abs(a);
    return b;
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d\n",my_abs(a));
    return 0;
}

