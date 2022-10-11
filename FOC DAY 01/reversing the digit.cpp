#include<stdio.h>
int main()
{
	int n,re,sum=0;
	printf("enter number: ");
	scanf("%d",&n);
	while(n>0);
	{
		re = n % 10;
		rev = rev * 10 + re;
		n=n/10;
	}
	printf("reverse= %d",rev);
}