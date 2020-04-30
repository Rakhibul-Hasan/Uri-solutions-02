#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(x==0) printf("C\n");
	else {
		if(y==0) printf("B\n");
		else printf("A\n");
	}
}
