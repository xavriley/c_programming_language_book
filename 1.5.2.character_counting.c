#include <stdio.h>

/* Count characters in input - 1st version */

main() {
	int nc;
	
	nc = 0;
	while(getchar() != EOF) 
		++nc;
	printf("%1d\n", nc);

}