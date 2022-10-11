#include<stdio.h>
int main()
{
	int n,re,sum=0;
	printf("enter number: ");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d is postive integer",n);
	}
	else if(n<0)
	{
		printf("%d is negative integer",n);
	}
	return 0;
}