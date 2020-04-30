#include<stdio.h>
int main()
{
	int n,i;
	double min;
	while(scanf("%d",&n)!=EOF){
	double t[n];
	for(i=0;i<n;i++)	scanf("%lf",&t[i]);
	min=t[0];
	for(i=0;i<n;i++){ if(t[i]<min) min=t[i]; }
	printf("%.2lf\n",min);
	}
}
