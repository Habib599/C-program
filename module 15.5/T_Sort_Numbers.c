#include <stdio.h>

int main() {
    int arr[1000],copy[1000];
    int n =3;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        copy[i]=arr[i];
    }
    
    int i, j, minIndex, temp;
    for (i = 0; i < n-1; i++) 
    {
        minIndex = i;
        for (j = i+1; j < n; j++) 
        {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
     printf("\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", copy[i]);
    }
    return 0;
}
