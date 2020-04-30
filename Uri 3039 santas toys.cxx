#include<stdio.h>
#include<string.h>
int main()
{
	short int m=0,f=0,n;
	char nm[20],g[2];
	char g1[]="M";
	scanf("%d",&n);
	while(n--){
		scanf("%s%s",nm,g);
		if(0==strcmp(g,g1)) m++;
		else f++;
	}
	printf("%d carrinhos\n%d bonecas\n",m,f);
	return 0;
}
