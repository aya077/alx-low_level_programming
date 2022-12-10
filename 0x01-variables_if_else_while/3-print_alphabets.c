#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * Return: 0
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(toupper(alp[i]));
	}
	putchar('\n');
	return (0);
}
