#include<stdio.h>
int main()
{
	int x,i,j;
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		//for(j=1;j<i;j++)
		for(j=x;j>i;j--){
			printf(" ");
		}printf("*****\n");
	}return 0;
}
