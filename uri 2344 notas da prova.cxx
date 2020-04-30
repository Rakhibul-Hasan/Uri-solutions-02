#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	if(x==0) printf("E\n");
	else if(x>0 && x<36) printf("D\n");
	else if(x>35 && x<61) printf("C\n");
	else if(x>60 && x<86) printf("B\n");
	else if(x>85 && x<101) printf("A\n");
	return 0;
}
