#include "main.h"

/**
 * path - Function that gets the path from environment
 *
 * @env: Environment variables
 *
 * Return: A string that contains enviorments, or NULL if fail
 */

char **path(char **env)
{
	int i = 0;
	char *path, **copy_path, **path_tok;

	while (env[i])
{
		if (_strncmp(env[i], "PATH", 4) == 0)
		{
			path = _strdup(env[i]);
			copy_path = tokenization(path, "=");
			free(path);
			path = _strdup(copy_path[1]);
			free_array(copy_path);
		}
		i++;
	}
	path_tok = tokenization(path, ":");
	return (path_tok);
}
