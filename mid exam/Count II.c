#include <stdio.h>
#include <string.h>
int main() {
    char a[1001];
    int n,vowels = 0;

    scanf("%s",a);
    for (int i = 0; i <strlen(a) ; i++) 
    {
        if (a[i]=='a') vowels++;
        else if (a[i]=='e') vowels++;
        else if (a[i]=='i') vowels++;
        else if (a[i]=='o') vowels++;
        else if (a[i]=='u') vowels++;
        
    }

   
    printf("%d\n",vowels);

    return 0;
}
