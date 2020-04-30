#include<stdio.h>
int main()
{
	int a,b,c,temp;
	scanf("%d%d%d",&a,&b,&c);
	if(b>a){ temp=b;
	b=a;
	a=temp; }
	if(c>b) { temp=c;
	c=b;
	b=temp; }
	if(b>a){ temp=b;
	b=a;
	a=temp; }
	if(a>= b+c) printf("Invalido\n");
	else{
		 if(a==b && b==c && c==a) 
		printf("Valido-Equilatero\n");
		else if(a==b || b==c || c==a)
		printf("Valido-Isoceles\n");
		else printf("Valido-Escaleno\n");
		if(a*a==(b*b+c*c)) printf("Retangulo: S\n");
		else printf("Retangulo: N\n");
	}
}
