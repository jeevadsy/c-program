#include <stdio.h>

int main(void) {
	int i,a[100],max,k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<k;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d",max);
	return 0;
}   
