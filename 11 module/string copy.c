#include <stdio.h>

int main()
{
    int i,a[100],b[100];
     scanf("%s %s",a,b);
    for(i=0;i<strlen(b);i++)
    {
        a[i]=b[i];
    }
    
    printf("%s %s",a,b);
    return 0;
}

