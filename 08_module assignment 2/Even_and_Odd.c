#include <stdio.h>

int main() {
    int n, num, even_sum = 0, odd_sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &num); 
        if (num % 2 == 0) 
        {
            even_sum += num; 
        } else {
            odd_sum += num; 
        }
    }
    printf("%d %d\n", even_sum, odd_sum);
      
    return 0;
}
