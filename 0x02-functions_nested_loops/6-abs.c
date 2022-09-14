#include "main.h"

/**
 * _abs  - Computes the absolute of an integer.
* _abs int- Computes the absolute value
 * @i: is the int that will use for the argument of the function
 * int - the inetger valve as argument
 *   * Return: absolute value 0
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
