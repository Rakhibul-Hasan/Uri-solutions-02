#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	char c[510];
	gets(c);
	l=strlen(c);
	if(l>140) printf("MUTE\n");
	else printf("TWEET\n");
	return 0;
}
