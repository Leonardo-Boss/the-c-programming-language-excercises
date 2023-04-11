#include <stdio.h>

// copy entry to exit and change tabulation for \t and backspace for \b and \ for \\

int
main()
{
    int c;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\t':
				printf("\\t");
				continue;
			case '\b':
				printf("\\b");
				continue;
			case '\\':
				printf("\\\\");
				continue;
			default:
				printf("%c", c);
        }
    }
}
