#include <stdio.h>
/**
 * main - print 10 times alphabet
 * Return: 0
 */

int main (void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			putchar(i);
			i++;
		}
		putchar('\n');
		j++;
	}
}
