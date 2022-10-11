#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum=0;
	printf("sum of the cube numbers till: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i*i*i;
	}
	printf("sum of the cube series till %d = %d",n,sum);
    return 0;

}