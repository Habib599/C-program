#include<stdio.h>
#include<limits.h>
int main()
{
    int n,max=INT_MIN,min=INT_MAX,mxp,mip;
    scanf("%d",&n); 
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]>max)
        {
            max=a[i];
            mxp=i;
        }
        if (a[i]<min)
        {
            min=a[i];
            mip=i;
        }
        
    }
    a[mxp]=min;
    a[mip]=max;

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}