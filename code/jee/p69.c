#include <stdio.h>
int main()
{
	int a,b;
	printf("enter the numbers\n");
	scanf("%d %d ",&a,&b);
	a=a-b;
	if(a%2==0)
	{
printf("even",a);
}
else
printf("odd",a);
return 0;
}
