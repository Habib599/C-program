#include <stdio.h>

int printDigits(int a[],int n,int sum) {
    if(n<0) return sum;
    sum+=a[n];
    printDigits(a,n-1,sum);
}

int main() {
    int t, n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("%d",printDigits(a,n-1,0));
    return 0;
}
