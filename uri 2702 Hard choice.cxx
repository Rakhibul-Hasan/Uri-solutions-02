#include<stdio.h>
int main()
{
	int a,b,c,x,y,z,s=0;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
	if(x>a) s=s+(x-a);
	if(y>b) s=s+(y-b);
	if(z>c) s=s+(z-c);
	printf("%d\n",s);
}
