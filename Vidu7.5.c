#include <stdio.h>

void main()
{
	char c;
	printf("Please enter a character: ");
	scanf("%c", &c);
	if (c >= 'A' && c <= 'Z')
		printf("Lowercase character = %c", c + 32);
	else
		printf("Character Entered is = %c", c);
}

