#include <stdio.h>

int main()
{
	int ar[100],i,n;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the number");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;ar[i]<=n;i++)
	{
	if(ar[i]%2!=0)
	{
		printf("%d\t",ar[i]);
	}
		
	}

	return 0;
}

