#include <stdio.h>
#include <string.h>
int main() 
{
    int n,a,b;

    scanf("%d %d",&a,&b);
    for (int i = 0; i<b ; i++) 
    {
       for (int j = 1; j <=a; j++)
       {
            printf("%d ",j);
       }
       printf("\n");
    }
    return 0;
}
