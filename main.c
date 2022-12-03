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
			write(1, "\n", 1);
			exit(EXIT_SUCCESS);
		}
		if (ptr[0] == '\n')
		{
			free(ptr);
			ptr = NULL;
			write(1, "$ ", 2);
			continue;
		}

		tokens = tokenization(ptr, " \n");
		comp_exec(tokens, ptr, env);
		free(ptr);
		ptr = NULL;
	}
	free_array(tokens);
	free(ptr);
	ptr = NULL;
	return (0);
}
