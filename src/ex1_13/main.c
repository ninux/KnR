#include <stdio.h>

main()
{
	char c;
	char lengths[20];	/* limit to 20 words */
	int wc;
	int i;
	int n;
	int last;		/* indicate last written character	*/
				/* -1 for non-alphabetical		*/
				/* +1 for alphabetical			*/

	wc = 0;
	lengths[wc] = 0;
	last = 1;

	while ((c = getchar()) != EOF) {
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
			if (last < 0) {
				wc++;
				lengths[wc] = 0;
				last = 1;
			}
			lengths[wc]++;
		} else {
			last = -1;
		}
	}

	printf("word\tletters\thist\n");
	for (i = 0; i <= wc; i++) {
		printf("%2i\t%2i\t", i, lengths[i]);
		for (n = 0; n < lengths[i]; n++) {
			printf("#");
		}
		printf("\n");
	}
}
