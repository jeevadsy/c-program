#include <stdio.h>
int main()
{
	int j,n,next;
	int t1=0;
	int t2=1;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("fibonacci series numbers are");
	for(j=1;j<=n;j++)
	{
		printf("%d,",t1);
		next=t1+t2;
		t1=t2;
		t2=next;
	}
	return 0;
}
