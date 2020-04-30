#include<stdio.h>
int main()
{
	int n,h,d,b;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&h,&d,&b);
		if(h>199 && h<301 && d>49 && b> 149) printf("Sim\n");
		else printf("Nao\n");
	}
	return 0;
}
