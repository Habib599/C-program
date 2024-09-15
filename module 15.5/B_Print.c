#include <stdio.h>
void printNumbers(int a)
{
    for (int i = 1; i <= a; i++)
    {
        if (i==a) printf("%d",i);
        else printf("%d ",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printNumbers(n);
    return 0;
}

