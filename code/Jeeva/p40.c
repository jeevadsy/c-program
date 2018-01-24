#include <stdio.h>
int main()
{
	int i,n,next;
	int t1=0;
	int t2=1;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("fibonacci series numbers are");
	for(i=1;i<=n;i++)
	{
		printf("%d,",t1);
		next=t1+t2;
		t1=t2;
		t2=next;
	}
	return 0;
}
