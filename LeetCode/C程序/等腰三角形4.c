#include<stdio.h>
int main()
{
	int i,j,k;
	printf("number=");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		for(k=i;k>j;k--)
		printf(" ");
		for(k=1;k<=2*j-1;k++)
		printf("*");
		printf("\n");
	}
	return 0;
}
