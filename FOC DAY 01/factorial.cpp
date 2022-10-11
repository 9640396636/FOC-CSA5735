#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("sum of the number to get factorial: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d = %d",n,fact);
    return 0;

}