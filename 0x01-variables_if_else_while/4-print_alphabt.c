#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry Point
 *
 * Return: Always 0
 */

int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	
	for (i = 0; i < 26; i++)
	{
		if((alp[i] != 'q' && alp[i] != 'e'))
			putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
