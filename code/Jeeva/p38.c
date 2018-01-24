#include <stdio.h>
int main()
{
	int a=01;
	int b=02;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("swaped numbers are a=%d b=%d",a,b);
	return 0;
}
