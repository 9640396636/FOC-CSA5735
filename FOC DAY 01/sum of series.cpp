#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("sum numbers up to: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of the numbers upto %d = %d",n,sum);
    return 0;

}