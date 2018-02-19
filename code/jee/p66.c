#include <stdio.h>
int main()
{
	int i,n,k=0;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			k++;
		}
	}
if(k==2)
{
	printf("yes",k);
}
else
{
	printf("no",k);
}
	return 0;
}
