#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    fgets(a,19,stdin);
    a[5]='\0';
    printf("%s",a);
    return 0;
}