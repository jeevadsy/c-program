#include <stdio.h>
int main()
{
	int i,K;
	char s[100];
	printf("enter the string\n");
	scanf("%s",&s);
	printf("enter the numbers\n");
	scanf("%d",&K);
	for(i=0;i<K;i++)
	{
		printf("%s\n",s);
	}
	return 0;
}
