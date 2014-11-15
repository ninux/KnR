#include <stdio.h>

main()
{
	char c;
	int alphasize = ('Z' - 'A');
	char letters[('Z' - 'A')+1];
	int i;
	int n;

	/* prepare the statistics array */
	for (i = 0; i <= alphasize; i++) {
		letters[i] = 0;
	}

	/* get the data out of the stream */
	while ((c = getchar()) != EOF) {
		if (((c >= 'A') && (c <= 'Z'))) {	/* uppercase letter */
			letters[c-'A']++;
		} else if ((c >= 'a') && (c <= 'z')) {	/* lowercase letter */
			letters[c-'a']++;
		} else {
			/* non-letter -> no operation */
		}
	}

	/* print the statistics */
	for (i = 0; i <= alphasize; i++) {
		printf("%c: ", i+'A');

		for (n = 0; n < letters[i]; n++) {
			if ((n+1) == letters[i]) {
				printf(">");
			} else {
				printf("-");
			}
		}

		printf("\n");
	}
}
