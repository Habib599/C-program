#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int even_found = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (i % 2 == 0) 
        {
            printf("%d\n", i);
            even_found = 1;
        }
    }
    if (!even_found) printf("-1\n");
    return 0;
}
