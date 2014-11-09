#include <stdio.h>

main()
{
	int blanks, tabs, newlines;
	char c;

	blanks = tabs = newlines = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			blanks++;
		if (c == '\t')
			tabs++;
		if (c == '\n')
			newlines++;
	}
	printf("blanks = %2i\ntabs = %2i\nnewlines = %2i\n",
	       blanks, tabs, newlines);
}
