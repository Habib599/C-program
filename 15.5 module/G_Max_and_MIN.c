#include <stdio.h>
void maxmin(int a[],int n,int*max,int*min)
{
    *max=a[0];
    *min=a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < *min) {
            *min = a[i];
        }
        if (a[i] > *max) {
            *max = a[i];
        }
        
    }
}
int main()
{
    int n,a[1000],max ,min;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    maxmin(a, n, &max, &min);
    printf("%d %d\n",min, max);
    return 0;
}

