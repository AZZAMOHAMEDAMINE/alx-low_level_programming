#include "main.h"

/**
 * print_alphabet - alphabet function
 *
 */
void print_alphabet(void)
{
	int i = 0;
	char str[26] = "abcdefghijklmnopqrstuvwxyz";

	while (i < 26)
		putchar(str[i++]);
	putchar('\n');
}
