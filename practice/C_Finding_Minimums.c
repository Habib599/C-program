#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int numbers[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    int lastGroupSize = N % K;
    int numGroups = N / K;

    for (int i = 0; i < numGroups; i++) //2
    {
        int min = numbers[i * K];//0
        for (int j = 1; j < K; j++) 
        {
            int index = i * K + j;
            if (numbers[index] < min) 
            {
                min = numbers[index];
            }
        }
        printf("%d ", min);
    }

    if (lastGroupSize > 0) 
    {
        int min = numbers[numGroups * K];
        for (int i = 1; i < lastGroupSize; i++) 
        {
            int index = numGroups * K + i;
            if (numbers[index] < min) 
            {
                min = numbers[index];
            }
        }
        printf("%d ", min);
    }

    return 0;
}
