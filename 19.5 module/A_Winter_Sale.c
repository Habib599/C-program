#include <stdio.h>

int main() {
    float X, P;
    scanf("%f %f", &X, &P);
    
    float originalPrice = P / (1 - (X / 100.0));
    
    printf("%.2f\n", originalPrice);
    
    return 0;
}
