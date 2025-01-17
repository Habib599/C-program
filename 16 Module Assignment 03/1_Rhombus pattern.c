#include <stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=s;j++)
            printf(" ");
        for (int j=1;j<=k;j++)
            printf("%d",j);
        s--;
        k=k+2; 
        printf("\n");
    }
    k=k-4;
    s=1;
    for(int i=1;i<=n;i++)
    {
        for (int j=1;j<=s;j++)
            printf(" ");
        for (int j=1;j<=k;j++)
            printf("%d",j);
        s++;
        k=k-2; 
        printf("\n");
    }
    return 0;
}
// output
//     1
//    123
//   12345
//  1234567
// 123456789
//  1234567
//   12345
//    123
//     1
     