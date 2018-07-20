#include <stdio.h>

int main(void)
{
	int c, blanks;

	blanks = 0; // recognize whether there is a blank after a character
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (blanks == 0) {
				putchar(c);
				blanks = 1;
			}
		}

		if (c != ' ') {
			putchar(c);
			blanks = 0;
		}
	}

	return 0;
}


/*
int main(void)
{
	int current, previous; // current = current character, previous = previous character

	// set previous to a value that wouldn't match any character
	previous = EOF;
	while ((current = getchar()) != EOF) {
		if (current == ' ') {
            if (previous != ' ')
                putchar(current);
		}
		if (current != ' ')
			putchar(current);
		previous = current;
	}

	return 0;
}
*/

/*
int main(void)
{
	int current, previous; // current = current character, previous = previous character

	// set previous to a value that wouldn't match any character
	previous = EOF;
	while ((current = getchar()) != EOF) {
		if (!((current == ' ') && (previous == ' ')))
			putchar(current);
		previous = current;
	}

	return 0;
}
*/

/*
int main(void)
{
	int current;

	while ((current = getchar()) != EOF) {
		if (current == ' ') {
			while ((current = getchar()) == ' ')
				;
			putchar(' ');
		}
		putchar(current);
	}

	return 0;
}
*/