#include<stdio.h>
#include<string.h>
int main()
{
char s[100];
int i,b;
printf("enter the string\n");
scanf("%s",s);
b=strlen(s);
for(i=0;i<b;i++)
{
if(s[i]>='0'&&s[i]<='9')
{
printf("%c",s[i]);
}
}
return 0;
}  
