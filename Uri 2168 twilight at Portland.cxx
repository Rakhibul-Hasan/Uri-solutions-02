#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n+1][n+1];
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++) scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if( a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]<2) printf("U");
			else printf("S");
		}
		printf("\n");
	}
	return 0;
}
