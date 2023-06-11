#include <stdio.h>

// write a program that prints your entry with one word per line

#define true 1;
#define false 0;

int
main()
{
	int c;
	int in_word = false;
	while ((c = getchar()) != EOF) {
		if ((c == ' ' || c == '\t' || c == '\n') && in_word) {
			in_word = false;
			printf("\n");
		}
		else if (!in_word) {
			in_word = true;
		}
		printf("%c", c);
	}
}
