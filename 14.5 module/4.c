#include <stdio.h>

char small_to_capital(char c) 
{   
   return (char) c-32;
}

int main() 
{
   char c;
   scanf("%c", &c);
    if (c>='a'&& c<='z')
    {
    int ascii_value = small_to_capital(c);
    printf("%c", ascii_value);
    }
    else printf("wrong input");
   return 0;
}
