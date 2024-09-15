#include <stdio.h>

int main() {
    int n, a[1000];
    int find, found=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &find);
    for (int i = 0; i < n; i++) 
    {
        if (a[i]  == find) 
        {
            found++;
        } 
    }

    printf("%d\n",found);

    return 0;
}
