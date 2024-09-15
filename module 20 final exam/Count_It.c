#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,Capital=0,Small=0,Spaces=0;
    char s[1001];
    fgets(s,1001,stdin);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            Capital ++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            Small ++;
        }
        else if(s[i]==32)
        {
            Spaces ++;
        }
    }
    printf("Capital - %d\n",Capital);
    printf("Small - %d\n",Small);
    printf("Spaces - %d\n",Spaces);

    return 0;
}

