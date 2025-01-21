#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Step 1: Find the minimum element in the array
    int min_element = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < min_element) {
            min_element = a[i];
        }
    }

    // Step 2: Count the frequency of the minimum element
    int frequency = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == min_element) {
            frequency++;
        }
    }

    // Step 3: Determine if Lucky or Unlucky
    if (frequency % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }

    return 0;
}
