#include <stdio.h>

int main (void)
{
	int x;
	printf ("Nhap vao so n: ");
	scanf ("%d", &x);
	if (x % 2 == 0)
		printf ("So chan");
	else
		printf ("So le");
}
