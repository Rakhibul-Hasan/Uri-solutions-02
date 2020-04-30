#include<stdio.h>

int main()
{
	long long fib[100100];
long long nfib[100100];

	int n;
int i,j,k;
	fib[0]=0; fib[1]=1;
	for(i=2;i<100101;i++) fib[i]=fib[i-1]+fib[i-2];
	for(i=1,j=2,k=1;i<100101;i++){
		if(fib[j]!=i) nfib[k++]=i;
		else j++; }
	scanf ("%d",&n);
	printf("%lld\n",nfib[n]);

}
