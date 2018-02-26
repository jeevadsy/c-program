#include <stdio.h>

int main()
{
	char s[100];
	int i,flag=0;
	printf("enter the string\n");
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')

{
	flag=1;
	break;
	
}
}
if(flag=1)

	printf("yes");

else
printf("no");

return 0;
}
