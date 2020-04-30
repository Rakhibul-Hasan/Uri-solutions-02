#include<stdio.h>
int main()
{
	int n,a,b,m,s=0;
	scanf("%d",&n);
	while(n--){ 
	scanf("%d%d",&a,&b);
	m=a*b;
	s+=m;
	}
	printf("%d\n",s);
}
