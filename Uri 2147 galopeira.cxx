#include<stdio.h>
#include<string.h>
int main()
{
	int l,n;
	double a;
	char c[10000];
	scanf("%d",&n);
	while(n--){
		scanf("%s",c);
		l=strlen(c);
		a=l/100.00;
		printf("%0.2lf\n",a);
	}
	return 0;
}
