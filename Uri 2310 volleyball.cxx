#include<stdio.h>
int main()
{
	int s[101],ss[101],b[101],sb[101],a[101],sa[101];
	int n,i,j,as=0,ab=0,aa=0,as1=0,ab1=0,aa1=0;
	double x,y,z;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%*s%d%d%d%d%d%d",&s[i],&b[i],&a[i],&ss[i],&sb[i],&sa[i]);
	}
	for(j=0;j<n;j++){ as1+= s[j];
	ab1+= b[j];
	aa1+= a[j];
	as+= ss[j];
	ab+= sb[j];
	aa+= sa[j];
	}
	x=as*100.00/as1;
	y=ab*100.00/ab1;
	z=aa*100.00/aa1;
	printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n",x,y,z);
	
}
