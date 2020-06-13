#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the no");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i>n/2)
	printf("\n%d is a prime no\n",n);
	else
	printf("\n%d is not a prime no\n",n);
	return 0;
}
