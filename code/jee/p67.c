#include <stdio.h>

int main()
{
	int n,i;
	printf("enter the number\n");
	scanf("%d",&n);
while(n!=0)
	{
		i=n+1;
		{
		if(i%10==0)
		{
			printf("%d",i);
			break;
		
		}
		i++;
		}
}
		return 0;
}
