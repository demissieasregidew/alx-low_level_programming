#include "main.h"
/**
 * puts2 - prints a str, followed by a new line,
 * @str: pointer to the string to print
 * Return: n
*/

void puts2(char *str)
{
int index = 0;
while (str[index] != '\0')
{
	if (index % 2 == 0)
	{
		_putchar(str[index]);
	}

	index++;
}
_putchar('\n');
}
