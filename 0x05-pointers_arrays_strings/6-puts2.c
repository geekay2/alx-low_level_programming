#include "main.h"
#include <string.h>

/**
 * puts2 -> Prints out every other char of the string.
 * @str: input string to print.
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
