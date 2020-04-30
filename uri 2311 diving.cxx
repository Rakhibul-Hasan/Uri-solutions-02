#include<stdio.h>
int main()
{
	int n,i;
	float x,y[20],min,max,t=0;
	char nm[100];
	scanf("%d",&n);
	while(n--){
		t=0;
		scanf("%s%f",nm,&x);
		for(i=0;i<7;i++) scanf("%f",&y[i]);
		min=y[0];
		max=y[0];
		for(i=0;i<7;i++) { if(y[i]<min) min=y[i];
		if(y[i]>max) max= y[i];
		}
		for(i=0;i<7;i++) { if(y[i]!= min && y[i]!= max) t+= y[i]; 
		}
		printf("%s %.2f\n",nm,t*x);
	}
	return 0;
}
