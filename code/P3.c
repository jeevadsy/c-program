#include <stdio.h>
int main()
{
char l;
printf("enter the letter\n");
scanf("%c",&l);
switch(l)
{
	case'a':
	case'e':
	case'i':
  case'o':
	case'u':
	case'A':
	case'E':
	case'I':
	case'O':
	case'U':
	printf("character iv vowel",l);
	break;
	default:
	printf("character is consonant",l);
}
return 0;
}
