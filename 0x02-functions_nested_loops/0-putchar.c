#include<stdio.h>
#include <unistd.h>

/**
 *  * main - Entry point
 *
 *   * Description: prints \"_puts\"
 *
 *    * Return: 0
 */

int _putchar()
{
	return (write("_putchar"));
}

int main(void)
{
	_putchar();
	return 0;
}
