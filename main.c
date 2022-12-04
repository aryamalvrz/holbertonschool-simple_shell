#include "main.h"

/**
 * main - Runs the Gates of s(H)ell
 *
 * @ac: argument count
 * @av: argument vector
 * @env: environment
 *
 * Return: 0
 */
int main(int ac, char **av,  char **env)
{
	char *ptr = NULL, **tokens = NULL;
	size_t n = 0;
	int flag;

	(void) ac;
	(void) av;

	while (1)
{
		if (isatty(0))
			write(1, "$ ", 2);

		flag = getline(&ptr, &n, stdin);

		if (flag == EOF)
		{
			free(ptr);
			exit(EXIT_SUCCESS);
		}
		if (ptr[0] == '\n' || ptr[0] == ' ')
		{
			free(ptr);
			ptr = NULL;
			continue;
		}

		tokens = tokenization(ptr, " \n");
		comp_exec(tokens, ptr, env);
	}
	return (0);
}
