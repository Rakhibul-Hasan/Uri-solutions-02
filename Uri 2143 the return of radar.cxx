#include<stdio.h>
int main()
{
	int i,m,n;
	while(scanf("%d",&m) && m) {
		for(i=0;i<m;i++){
			scanf("%d",&n);
			if(n%2) printf("%d\n",2*n-1);
			else printf("%d\n",2*n-2);
		}
	}
	return 0;
}
