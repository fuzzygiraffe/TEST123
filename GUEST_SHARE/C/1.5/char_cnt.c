#include <stdio.h>

/* count characters in input; 1st verison */
int amain()
{
	long nc;

	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}
