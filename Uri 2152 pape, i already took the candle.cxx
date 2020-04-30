#include<stdio.h>
int main()
{
	int h,m,d,n;
	scanf("%d",&n);
	while(n--){
		scanf("%d%d%d",&h,&m,&d);
		if(d==1) {
			if(h<10 && m<10) printf("0%d:0%d - A porta abriu!\n",h,m);
		else if(h<10) printf("0%d:%d - A porta abriu!\n",h,m);	
		else if(m<10) printf("%d:0%d - A porta abriu!\n",h,m);
			else printf("%d:%d - A porta abriu!\n",h,m);
			}
		else if(d==0) {
			if(h<10 && m<10) printf("0%d:0%d - A porta fechou!\n",h,m);
		else if(h<10) printf("0%d:%d - A porta fechou!\n",h,m);
		else if(m<10) printf("%d:0%d - A porta fechou!\n",h,m);
			else printf("%d:%d - A porta fechou!\n",h,m);
	}
	}
	return 0;
}
