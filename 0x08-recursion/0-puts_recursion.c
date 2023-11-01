#include "main.h"
/**
 * _put_recurson - function name
 * @s: parameter of the funtion
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
	_putchar (*s);
	_puts_recursion(s + 1);
	}
	else
	_putchar('\n');
}
