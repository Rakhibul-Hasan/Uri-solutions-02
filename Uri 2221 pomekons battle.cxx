#include<stdio.h>
int main()
{
	int da,dd,dl,ga,gd,gl,n,b;
	double vd1,vd,vg1,vg;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d%d%d%d",&b,&da,&dd,&dl,&ga,&gd,&gl);
		vd1=(da+dd)/2.00;
		vg1=(ga+gd)/2.00;
		if(dl%2==0) vd=vd1+b;
		else vd=vd1;
		if(gl%2==0) vg=vg1+b;
		else vg=vg1;
		if(vg>vd) printf("Guarte\n");
		else if(vg<vd) printf("Dabriel\n");
		else printf("Empate\n");
	}
	return 0;
}
