#include<stdio.h>
int factorial_of_no(int n)
{
	int fact=1,i;
	if(n==0)
	return 1;
	else
	for(i=1;i<=n;i++)
	{
	fact=fact*i;	
	}
	return fact;
}
int main()
{int n;
	printf("enter a no",n);
	scanf("%d",&n);
	if(n<0)
	printf("invalid input");
	else
	printf("factorial of no is %d",factorial_of_no(n));
}
