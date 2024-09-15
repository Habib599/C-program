#include <stdio.h>

int main() {
    int t, n, s;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) 
    {
        scanf("%d", &n);
        int a[1000];

        for (int j = 0; j < n; j++) 
        {
            scanf("%d", &a[j]);
        }

        scanf("%d", &s);

        int found = 0;
        for (int j = 0; j < n; j++) 
        {
            if (a[j] == s) 
            {
                printf("Case %d: %d\n", i, j + 1);
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("Case %d: Not Found\n", i);
        }
    }

    return 0;
}
