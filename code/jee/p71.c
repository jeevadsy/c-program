#include <stdio.h>

int main()
{
char s[100];
int l,i,flag=0;
printf("enter the string\n");
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
	if(s[i]!=s[l-i-1])
	{
		
	flag=1;
	break;
}
}
if(flag)

printf("not a palindrome");
else
printf("palindrome");
	return 0;
}
