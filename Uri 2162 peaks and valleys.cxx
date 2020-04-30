#include<stdio.h>
int main()
{
	int f,n,i,j,k,temp;
	scanf("%d",&n);
	int c[n];
	for(i=0;i<n;i++) scanf("%d",&c[i]);
	k=c[0];
	if(c[0]<c[1]){
	for(j=1;j<n;j++) {
		if(j%2==0) { if(c[j]<k) { f=1; temp=k; k=c[j]; c[j]=temp; }
		else { printf("0\n"); return 0; }
		}
		else if(j%2==1) { if(c[j]>k) { f=1;temp=k; k=c[j]; c[j]=temp; }
		else { printf("0\n"); return 0; }
		}
		
	}
	if(f==1) printf("1\n");
	}
	else{
		for(j=1;j<n;j++) {
		if(j%2==0) { if(c[j]>k) { f=1; temp=k; k=c[j]; c[j]=temp; }
		else { printf("0\n"); return 0; }
		}
		else if(j%2==1) { if(c[j]<k) { f=1;temp=k; k=c[j]; c[j]=temp; }
		else { printf("0\n"); return 0; }
		}
		
	}
	if(f==1) printf("1\n");
	}
	
	return 0;
}
