#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,s=0;
	char c[110];
	scanf("%s",c);
	l=strlen(c);
	
	for(i=0;i<l;i++) {if(c[i]=='1') s++; }
	if(s%2==0) printf("%s0\n",c);
	else printf("%s1\n",c);
	return 0;
}
