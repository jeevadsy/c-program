#include <stdio.h>

int main()
{
	int i,n;
	printf("enter the number");
	scanf("%d",&n);
	printf("the factor is %d\n",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
			
		}
	}
	return 0;
}
