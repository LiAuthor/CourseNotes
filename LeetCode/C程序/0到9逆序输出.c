#include<stdio.h>
int main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++)
	{
		a[i]=i;
	}
	for(i=9;i>=0;i--)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	printf("%d\n",a[1]) ;
	return 0;
}
