#include "main.h"
/**
 * _isupper -  function that checks for uppercase character
 * @c: character that needs to be checked
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
