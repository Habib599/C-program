#include <stdio.h>

int main() {
    int password;
    while (scanf("%d", &password) == 1)
     {
        if (password == 1999) 
        {
            printf("Correct\n");
            return 0;
        } 
        else
         {
            printf("Wrong\n");
        }
    }
    return 0;
}
