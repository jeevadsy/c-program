#include <stdio.h>
int main()
{
	char p;
	printf("enter the character\n");
    scanf("%c",&p);
    if((p>='a'&& p<='z')||(p>='A'&& p<='Z'))
    
	printf("character %c is Alphabet",p);
else
    	printf("character %c is No",p);
    
	return 0;
}
