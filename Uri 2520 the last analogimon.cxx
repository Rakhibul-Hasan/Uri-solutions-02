#include<stdio.h>
int main()
{
	int i,j,m,n,p1,q1,p2,q2,s=0;
	while(scanf("%d%d",&n,&m)!=EOF)
	{
		int ara [n][m];
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				scanf("%d",&ara[i][j]);
				if(ara[i][j]==1) {p1=i; q1=j;}
				if(ara[i][j]==2){ p2=i; q2=j;}
			}
		}
		if(p1>p2){ s+=(p1-p2); }
		else { s+=(p2-p1); }
		
		if(q1>q2){ s+=(q1-q2); }
		else { s+=(q2-q1); }
		printf("%d\n",s);
		s=0;
	}
}
