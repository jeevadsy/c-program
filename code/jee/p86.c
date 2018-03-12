#include<stdio.h>
#include<string.h>
int main()
{
char s[20];
int i=0,j=0,f=0,b;
scanf("%s",s);
b=strlen(s);
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
	if(s[i]==s[j])
	{
		f=1;
		break;
	}
}
}
if(f==1)

	printf("no");
	else
	printf("yes");

return 0;
}  
