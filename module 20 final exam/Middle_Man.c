#include <stdio.h>
int main()
{
    int n,arr[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n - 1; i++) 
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_idx]) 
            {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    if(n%2==0)
    {
        int m=n/2;
        printf("%d %d\n",arr[m-1],arr[m]);
    }
    else 
    {
        int m=n/2;
        printf("%d\n",arr[m]);
    }
    return 0;
}

