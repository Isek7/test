#include "shell.h"

/**
* _strncmp - The name of the function.
* @s1:  the contain of the variable in reverse
* @s2: character
* Return: x.
**/
int _strncmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && *s1 == *s2; s1++)
	{
		s2++;
	}
	return (*s1 - *s2);
}
