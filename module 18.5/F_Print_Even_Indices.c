#include <stdio.h>

void printDigits(int a[],int n) {
    if(n<0) return;
    if(n%2==0)
    {
        printf("%d ",a[n]);
    }
    
    printDigits(a,n-1);
    
    

    
}

int main() {
    int t, n, a[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printDigits(a,n-1);
    return 0;
}
