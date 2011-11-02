#include <stdio.h>

/* Program to standardise blanks from stdin */

main() {
	int c, prevchar;
	
	while((c = getchar()) != EOF) {
		if(c == ' ' && prevchar == ' ')
			;
		else {
			prevchar = c;
			putchar(c);
		}
	}
	
}