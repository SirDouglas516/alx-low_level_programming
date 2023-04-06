#include "main.h"
/**
 * _puts_recursion - to print a string followed by a new line
 * @s: is a character pointer
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}	
