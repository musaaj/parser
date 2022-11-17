#include "parser.h"

/**
 * main - driver of our program
 * @ac: command line agrument count
 * @agrs: command line argument
 * Return: 0 always
 */
int main(__attribute__((unused))int ac, __attribute__((unused))char **args)
{
	char *str = "echo \"Hello World Me and \"you\" I \"can do many\" things";
	char *tmp;
	tmp = next_token(str, "\n ");
	while (tmp)
	{
		printf("%s\n", tmp);
		tmp = next_token(NULL, "\n ");
	}
	return (0);
}
