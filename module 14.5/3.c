#include <stdio.h>

int char_to_ascii(char c) 
{
   return (int) c;
}

int main() 
{
   char c;
   scanf("%c", &c);
   int ascii_value = char_to_ascii(c);
   printf("%d", ascii_value);
   return 0;
}
