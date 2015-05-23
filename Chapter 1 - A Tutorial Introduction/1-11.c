#include <stdio.h>

#define IN 1
#define OUT 0

/* count lines, words, and character input */
/* This is the code given in the book, page 20 */

main()
{
	int c, nl, nw, nc, state;
	
	state = OUT;
	nl = nw = nc = 0;
	
	printf("Please enter some text:\n");
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("Number or new lines: %d\n", nl);
	printf("Number or new words: %d\n", nw);
	printf("Number or new characters: %d\n", nc);
}

/* To test it you'd enter a large variety of input, from very short sentances
to very long paragraphs, with knowledge of what the output should be. */