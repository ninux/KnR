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
		if (((c >= 'A') && (c <= 'Z'))) {	/* uppercase */
			letters[c-'A']++;
		} else if ((c >= 'a') && (c <= 'z')) {	/* lowercase */
			letters[c-'a']++;	/* lowercase = uppercase */
		} else {
			/* non-letter -> no operation */
		}
	}

	/* print the statistics scale */
	printf("\t0         10        20        30        40\n");
	printf("\t|    5    |    15   |    25   |    35   |\n");
	printf("________|____|____|____|____|____|____|____|____|___\n");
	printf("\t|\n");
	for (i = 0; i <= alphasize; i++) {
		printf("%c %3d\t", i+'A', letters[i]);

		for (n = 0; n <= letters[i]; n++) {
			if (n == 0) {
				printf("|");
			}

			if ((n) == letters[i]) {
				printf(">");
			} else {
				printf("-");
			}
		}

		printf("\n");
	}
	printf("________|___________________________________________\n");
}
