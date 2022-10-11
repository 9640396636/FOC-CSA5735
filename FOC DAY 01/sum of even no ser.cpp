#include<stdio.h>
int main()
{
	int i,n;
	float a[100],sum=0,avg;
	printf("enter the number of integers: ");
	scanf("%d",&n);
	printf("enter integers: ");
	for(i=0;i<=n;i++)
	{
		scanf("%f",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
}
	avg=sum/n;
	printf("\nsum of given numbers= %.2f",sum);
	printf("0\nAverage of given number= %.2f",avg);
	return 0;
}