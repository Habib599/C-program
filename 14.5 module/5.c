#include <stdio.h>

char capital_to_small(char c) 
{   
   return (char) c+32;
}

int main() 
{
   char c;
   scanf("%c", &c);
    if (c>='A'&& c<='Z')
    {
    int ascii_value = capital_to_small(c);
    printf("%c", ascii_value);
    }
    else printf("wrong input");
   return 0;
}
