#include "shell.h"

/**
 * split_str -Funtion that cut a string
 * @s1: pointer to a string
 * Return: None
 **/
char split_str(char *s1)
{
	char s2[] = " \n \0";
	char *p, *copy;

	p = strtok(s1, s2);
	if (p == NULL)
	{
		perror("Error:Token");
			exit(1);
	}
	while (p != NULL)
	{
		p = strtok(NULL, s2);
		if (p != NULL)
		{
			int aux = 0;
			int j = _strleng(p);

			copy = malloc(j * sizeof(char));
			for (; aux < j; aux++)
			{
				*(copy + aux) = *(p + aux);
			}
		}
	}
	free(copy);
return (*copy);
}
