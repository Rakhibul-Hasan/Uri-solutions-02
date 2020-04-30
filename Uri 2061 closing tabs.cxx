#include<stdio.h>
#include<string.h>
int main()
{
	int t,n;
	char x1[]="fechou",x2[]="clicou",x[20];
	scanf("%d%d",&t,&n);
	while(n--){
		scanf("%s",x);
		if(0==strcmp(x,x1)) t++;
		if(0==strcmp(x,x2)) t--;
	}
	printf("%d\n",t);
}
