#include<stdio.h>
int main()
{
	int n,re,i=1;
	printf("enter number: ");
	scanf("%d",&n);
	while(n>0)
	{
		re=n%10;
		printf("%d. digit = %d\n",i++,re);
		n=n/10;
	}
	return 0; 
}