#include <stdio.h>
#include <stdlib.h>



int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort the array in descending order
    qsort(a, n, sizeof(int), compare);

    
    long long sum = 0; 
    for (int i = 0; i < k; i++) {
        sum += a[i];
    }

    printf("%lld\n", sum);
    return 0;
}
