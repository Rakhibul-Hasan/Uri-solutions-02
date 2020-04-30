#include<stdio.h>
int main()
{
	int n,a,b,d,x;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d",&a,&b);
		d=a/b;
		x=a%b;
		printf("%d\n",d+x);
	}
}
