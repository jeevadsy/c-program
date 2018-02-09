#include <stdio.h>
int main()
{
	int n;
	printf("enter the number\n ");
	scanf("%d",&n);
	if(n%2==0)
	{
		n=n-2;
		printf("the nearest even  number is :%d",n);
	}else if(n%2!=0)
	{
		n=n-1;
		printf("the nearest even number is: %d",n);
	}
	return 0;
}
