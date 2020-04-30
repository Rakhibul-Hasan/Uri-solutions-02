#include<stdio.h>
int main()
{
	unsigned long long x;
	while(1){ scanf("%llu",&x);
	if(x==-1ll) break;
	else if (x==0ll) printf("0\n");
	else printf("%llu\n",x-1);
}
}
