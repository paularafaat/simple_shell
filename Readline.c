#include "shell.h"
/**
* read_line - function to read line frome stdin
* Return: pointer to the readed line
*/
char *read_line(void)
{
	char *line = NULL;
	size_t lenth = 0;
	ssize_t nread;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "$ ", 2);

	nread = getline(&line, &lenth, stdin);
	if (nread == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
