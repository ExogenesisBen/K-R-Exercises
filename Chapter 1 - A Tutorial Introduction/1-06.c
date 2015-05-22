#include <stdio.h>

/* verify value of getchar() != EOF is boolean */

main()
{
	printf("Please enter a char:\n");
	printf("getchar() != EOF : %d\n", getchar() != EOF);
}