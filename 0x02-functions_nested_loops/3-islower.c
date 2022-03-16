#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: is an ascii character
 *
 * Return: if lowercase
 */
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
