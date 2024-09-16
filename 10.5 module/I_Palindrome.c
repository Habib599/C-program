#include <stdio.h>
#include <string.h>
int main()
{
	char s[1001];
	scanf("%s",s);
	int p=1,i=0,j=strlen(s);
	while(i<j)
	{
		if(s[i]==s[j-1]) i++,j--;
		else p=0;break;
	}
    if (p)  printf("YES\n");
    else  printf("NO\n");
	return 0;
}