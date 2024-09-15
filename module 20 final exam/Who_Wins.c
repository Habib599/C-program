#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int tiger = 0, pathan = 0;

    for (int i = 0; i < n; i++) 
    {
        int x1, x2;
        scanf("%d %d", &x1, &x2);
        if (x1 > x2) 
        {
            tiger++;
        } else if (x1 < x2) 
        {
            pathan++;
        }
    }

    if (tiger > pathan) {
        printf("Tiger\n");
    } else if (tiger < pathan) {
        printf("Pathan\n");
    } else {
        printf("Draw\n");
    }

    return 0;
}
