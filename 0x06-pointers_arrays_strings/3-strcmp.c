#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcmp -> for comparing two strings
 *
 * @s1: parameter1
 * @s2: parameter2
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2);
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
