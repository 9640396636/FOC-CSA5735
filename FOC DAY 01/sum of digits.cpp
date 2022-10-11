#include<stdio.h>
int main()
{
	int n,re,sum=0;
	printf("enter number: ");
	scanf("%d",&n);
	while(n>0);
	{
		re=n%10;
		sum+=re;
		n=n/10;
	}
	printf("sum= %d",sum);
}