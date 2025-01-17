#include<stdio.h>
#include<string.h>
char* fun(char ar[])
{
    printf("%d\n",strlen(ar));
    static char n[]="World";// Static array persists after the function ends
    return n;
}
int main()
{
    char ar[20]="Hello";
    printf("%s",fun(ar));
    return 0;
}