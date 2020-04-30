#include<stdio.h>
int main()
{
	int n,jx1,jd1,jx2,jd2,jx3,jd3,mx1,md1,mx2,md2,mx3,md3,jt,mt;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&jx1,&jd1,&jx2,&jd2,&jx3,&jd3,&mx1,&md1,&mx2,&md2,&mx3,&md3);
jt=jx1*jd1+jx2*jd2+jx3*jd3;
mt=mx1*md1+mx2*md2+mx3*md3;
if(mt>jt) printf("MARIA\n");
else if(mt<jt) printf("JOAO\n");
jt=0; mt=0;
		}
		return 0;
}
