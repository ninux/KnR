#include <stdio.h>

main()
{
	char c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			printf("\\\\");
		} else if (c == '\t') {
			printf("\\t");
		} else if (c == '\n') {
			printf("\\n");
		} else {
			printf("%c", c);
		}
	}
}
