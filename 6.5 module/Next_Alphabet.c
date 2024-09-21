#include<stdio.h>
int main()
{
    char al;
    scanf("%c",&al);

    if(al==122) al=97;
    else al+=1;
    
    printf("%c\n",al);
    return 0;
}
