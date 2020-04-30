#include<stdio.h>
#include<string.h>
int main()
{
	char g1[]="esquerda",g2[]="direita",
	g3[]="nenhuma",g4[]="as";
	char i[25];
	while(scanf("%s",i)!=EOF)
	{
		if(0==strcmp(g1,i))
		 printf("ingles\n");
		 if(0==strcmp(g2,i))
		 printf("frances\n");
		 if(0==strcmp(g3,i))
		 printf("portugues\n");
		 if(0==strcmp(g4,i))
		 printf("caiu\n");
		 
		 
	}
}
