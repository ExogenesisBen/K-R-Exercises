#include <stdio.h>

/* A program to print the input one word per line */

main()
{
	int c;
	
	printf("Please enter some text here to have seperated one word per line:\n");
	
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			printf("\n");
		else
			putchar(c);
	}
}