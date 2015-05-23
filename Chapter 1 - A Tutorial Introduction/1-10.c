#include <stdio.h>

/* a program to replace tab by \t, each backspace with \b, and each backslash by \\ */

main()
{
	int c;
	printf("Please enter some characters:\n");
	
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		if (c == '\b')
			printf("\\t");
		if (c == '\\')
			printf("\\\\");
		else
			printf("%c", c);
	}
}