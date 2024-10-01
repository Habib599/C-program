#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);  

    int p = 1, i = 0, j = strlen(s) - 1;

    while (i < j)
	{
        if (s[i] == s[j]) 
		{
            i++;  
            j--;  
        } else {
            p = 0;  
            break;  
        }
    }

    if (p) {
        printf("YES\n");  // String is a palindrome
    } else {
        printf("NO\n");   // String is not a palindrome
    }

    return 0;
}
