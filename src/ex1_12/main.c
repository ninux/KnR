#include <stdio.h>

main()
{
	char c;

	while ((c = getchar()) != EOF) {
		if ((c == ' ') || (c == '\t')) {
			while ((c = getchar()) == ' ' || (c == '\t')) {
				/* wait till non-blank or non-tab */
			}
			printf("\n%c");
		} else {
			printf("%c", c);
		}
	}
}
