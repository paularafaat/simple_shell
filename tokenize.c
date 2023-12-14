#include "shell.h"
/**
* tokenizer - to tokenize the string
* @line: string to tokenize
* Return: the tokens
*/
char **tokenizer(char *line)
{
	const char delim[] = " \t\n";
	char *token = NULL, *tmp = NULL;
	char **cmd = NULL;
	int count = 0, i = 0;

	if (!line)
		return (NULL);

	tmp = _strdup(line);
	token = strtok(tmp, delim);
	if (token == NULL)
	{
		free(line), line = NULL;
		free(tmp), tmp = NULL;
		return (NULL);
	}
	while (token)
	{
		count++;
		token = strtok(NULL, delim);
	}

	free(tmp), tmp = NULL;
	cmd = malloc(sizeof(char *) * (count + 1));
	if (!cmd)
	{
		free(line), line = NULL;
		return (NULL);
	}
	token = strtok(line, delim);
	while (token)
	{
		cmd[i] = _strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	free(line), line = NULL;
	cmd[i] = NULL;
	return (cmd);
}
