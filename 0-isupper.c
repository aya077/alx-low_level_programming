#include "main.h"
/**
 * _isoupper - Uppercase letters
 * @c: char to check
 * Return: 0 or 1
 */

int _isoupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
