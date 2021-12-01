#include <stdio.h>

/* copy input to output */
main()
{
	int c;

	c = getchar() != EOF;

	printf("%d\n", c);
}