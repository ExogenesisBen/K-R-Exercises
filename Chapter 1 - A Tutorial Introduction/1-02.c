#include <stdio.h>

/* Experiment with \x with x being different letters */

main()
{
	printf("\n--\n");
	/* Normal */
	printf("hello, world");
	
	printf("\n--\n");
	/* Tab */
	printf("hello, \t world");
	
	printf("\n--\n");
	/* Backspace */
	printf("hello, \b\b\b world");
	
	printf("\n--\n");
	/* Alert */
	printf("hello, world\a");
	
	printf("\n--\n");
}