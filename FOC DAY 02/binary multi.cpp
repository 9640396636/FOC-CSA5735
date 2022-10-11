#include<stdio.h.>
int binaryproduct(int binNum1,int binNum2)
{
	int i = 0;
	int rem = 0;
	int product = 0;
	int sum[20] = { 0 };
	
	while (binNum1 != 0 || binNum2 !=0) {
		
		sum[i] =  (binNum1 % 10 + binNum2 % 10 + rem) % 2;
		rem = (binNum1 % 10 + binNum2 % 10 + rem) / 2;
		
		binNum1 = binNum1 / 10;
		binNum2 = binNum2 / 10;
		
		i = i + 1;
	}
	if (rem != 0)
        sum[i] = rem;
		
    while (i >=0) {
    	product = product * 10 + sum[i];
    	i = i - 1;
	}
	return product;
	}	
	int main()
	{
		long bignum1 = 0;
		long bignum2 = 0;
		long product = 0;
		
		int digit = 0;
		int factor = 0;
		int b1,b2;
		printf("enter number1: ");
		scanf("%d", &b1);	
		binNum1=binNum  
