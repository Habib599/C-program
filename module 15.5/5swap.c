#include <stdio.h>
    void swap(int *p, int *q)
    {
        int temp = *p; 
        *p = *q; 
        *q = temp;
    }
    void main()
    {
        int a,b;
        scanf("%d %d",&a,&b);
        swap(&a, &b);
        printf("%d %d\n", a, b);
    }