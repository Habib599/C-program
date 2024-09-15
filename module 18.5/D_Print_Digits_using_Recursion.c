#include <stdio.h>

void printDigits(int n) {
    if(n<10) printf("%d ",n);
    else {
    printDigits(n/10);
    printf("%d ",n%10);
}
    
}

int main() {
    int t, n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int j;
        j=a[i];
        printDigits(j);
        printf("\n");
    }
    
    
    return 0;
}
