#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the numbers up to: ");
	scanf("%d ",&n);
	for(i=1;1<=n;i++)
	{
		if(i%2!=0)
		printf("%d ",i);
    }
    return 0;
	
}