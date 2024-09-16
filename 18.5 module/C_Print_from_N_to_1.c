#include <stdio.h>
void fun(int i){
    if(i==1) return;
    printf("%d ",i);
    fun(i-1);
    // printf("%d",i);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    fun(n);
    printf("1");
    return 0;
}

