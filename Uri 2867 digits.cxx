#include<stdio.h>
#include<math.h>
int main()
{
	int m,n,l,x;
	double lg;
	scanf("%d",&x);
	while(x--){
	scanf("%d%d",&m,&n);
	lg=log10(m);
	lg*=n;
	l=lg+1;
	printf("%d\n",l);
	}
}
