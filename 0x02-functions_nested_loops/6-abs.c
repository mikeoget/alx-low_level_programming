#include "main.h"
/**
 * _abs - computes the absolute value
 * @n: is an integer
 *
 * Returns: integer
 */
int _abs(int n)
{
	if(n > 0)
	{
		return(n);
	}
	else if(n < 0)
	{
		return(-n);
	}
	else
	{
		return(n);
	}
}

