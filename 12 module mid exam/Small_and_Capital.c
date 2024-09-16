#include <stdio.h>
#include <string.h>
int main() {
    char a[1001];
    int n,capital = 0, small=0;

    scanf("%s",a);
    for (int i = 0; i <strlen(a) ; i++) 
    {
        if (a[i]>='A' && a[i]<='Z') capital++;
        else if (a[i]>='a' && a[i]<='z') small++;
    }

   
    printf("%d %d\n",capital,small);

    return 0;
}
