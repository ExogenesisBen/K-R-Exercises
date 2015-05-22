#include <stdio.h>

#define TRUE 1
#define FALSE 0

/* replace 1 or more blanks with a single blank */

main ()
{
	int c, prevBlank;
	prevBlank = FALSE;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (prevBlank == FALSE) {
				putchar(c);
				prevBlank = TRUE;
			}
		}
		if (c != ' ') {
			putchar(c);
			prevBlank = FALSE;
		}
		
	}
}