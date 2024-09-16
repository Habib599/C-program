#include <stdio.h>
int swap_it(int a[],int n)
{
    int count=0;
    for (int i = 0; i <n; i++)
    {
        if (a[i]%2!=0) count++;
    }
    return count;
}
int main()
{
    int n,a[1000];
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    swap_it(a ,n);
     printf("%d\n", swap_it(a ,n));
    return 0;
}

