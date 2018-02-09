#include <stdio.h>
int main()
{
	int n,ar[100],i=0;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		printf("%d",ar[i]);
	}
	return 0;
}
