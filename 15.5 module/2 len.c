#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_len(char a[])
{
    int b=strlen(a);
    return b;
}
int main()
{
    char a[100];
    scanf("%s",&a);
    printf("%d\n",my_len(a));
    return 0;
}

