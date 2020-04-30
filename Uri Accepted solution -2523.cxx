#include<stdio.h>
int main()
{
	int n,i,l;
	char ch[50];
	while(scanf("%s",ch)!=EOF)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++){ scanf("%d",&l);
		printf("%c",ch[l-1]);
		} printf("\n");
	}
}
