#include <stdio.h>
int main()
{
	int n,i=0;
	printf("enter the numbers\n");
	scanf("%d",&n);
	while(n!=0)
	{
		n/=10;
		++i;
	}
	printf("the count is %d",i);
	return 0;
}
