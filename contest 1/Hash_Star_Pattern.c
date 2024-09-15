#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0 || N < 1 || N > 21) {
       
        return 0;
    }

    int middle = N / 2 + 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (i == middle || j == middle)
                printf("#");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}
