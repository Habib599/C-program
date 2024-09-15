#include <stdio.h>
void update_number(int *x) 
{
    *x=6;
    printf("x = %d\n", *x);
}
int main() {
    int num = 5;
    update_number(&num);
    printf("num = %d",num);
    return 0;
}
