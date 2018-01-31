#include <stdio.h>
int main()
{
	char s[60];
	int i=0,a=0,b=0,c=0;
	printf("enter the input\n");
	gets(s);
	while(s[i]!='\0')
	{
	if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
	{
		a++;
	}
	else if((s[i]>='0'&&s[i]<='9'))
	{
		b++;
	}
	else
	{
		c++;
	}
	i++;
	}
	
 printf("no of special character %d",c);
	return 0;
}

