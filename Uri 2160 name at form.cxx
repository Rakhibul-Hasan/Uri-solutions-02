#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	char s[501];
	gets(s);
	l=strlen(s);
	if(l>80) printf("NO\n");
	else printf("YES\n");
}
