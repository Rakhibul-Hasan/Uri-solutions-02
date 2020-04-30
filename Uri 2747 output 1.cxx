#include<stdio.h>
int main()
{
 int i,j;
 for(i=0;i<13;i++) printf("---");
 printf("\n");
 for(j=0;j<5;j++){
 	printf("|");
 	for(i=0;i<37;i++) printf(" ");
 	printf("|\n");
 }
 for(i=0;i<13;i++) printf("---");
 printf("\n");
}
