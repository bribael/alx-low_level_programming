#include "main.h"
/**
* _print_rev_recursion - this function prints a string recursively in reverse
* @s: This is the string
* Return: Void
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
