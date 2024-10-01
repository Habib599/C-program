#include <stdio.h>
#include <string.h> 

int main() {
    char s1[100], s2[100],s3[100];
    scanf("%s %s", s1, s2);

    int len1 = strlen(s1), len2 = strlen(s2);

    printf("%d %d\n", len1, len2); 
    
    strcpy(s3, s1);
    for (int i = 0; i <= strlen(s2); i++)
    {
        s1[len1]=s2[i];
        len1++;
    }
    printf("%s\n", s1); 
    
    s3[0] ^= s2[0] ^= s3[0] ^= s2[0]; // XOR swap

    printf("%s %s\n", s3, s2); 
    
    return 0;
}
