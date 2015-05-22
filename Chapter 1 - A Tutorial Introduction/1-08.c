#include <stdio.h>

/* count blanks, tabs, and newlines */

main()
{
	int c, blank, tab, nl;
	
	blank = tab = nl = 0;
		
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blank;
		if (c == '\t')
			++tab;
		if (c == '\n')
			++nl;
	}
	
	printf("Number of blanks: %d\n", blank);
	printf("Number of tabs: %d\n", tab);
	printf("Number of new lines: %d\n", nl);	
}