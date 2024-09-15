#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) 
    {
        int n;
        scanf("%d", &n);
        do
        {
            printf("%d ", n%10);
            n= n / 10;
            
        } while (n != 0); 
        printf("\n");
    }

    return 0;
}
