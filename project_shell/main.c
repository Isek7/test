#include "shell.h"
/**
 * main - funtion principal init program simple bash.
 *@argc: number parameters.
 *@argv: char pointer.
 * Return: 0 for Success.
 **/
int main(int argc, char *argv[])
{
	int j = 1, i;

	if (argc > 1)
	{
		for (i = argc - 1; i > 0; i--, j++)
		{
			_printf(argv[j]);
			perror(" ERROR-");
			exit(1);
		}
	}
	else
	{
		start_bash();
	}

return (0);
}
