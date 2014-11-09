#include <stdio.h>

main()
{
	char c;

	while ((c = getchar()) != EOF) {
		if (c != ' ') {
			printf("%c", c);
		} else {
			printf("%c", c);
			while ((c = getchar()) == ' ') {
				/* wait till non-blank input arrives*/
			}
			printf("%c", c);
		}
	}
}
