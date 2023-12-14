#include "shell.h"
/**
* main - main funciont of shell
* @ac: count of args
* @argv: args
* Return: 0 (sucess)
*/
int main(int ac, char **argv)
{
	char *line = NULL, **cmd = NULL;
	int status = 0;
	(void) ac;

	while (1)
	{
		line = read_line();
		if (line == NULL)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}
		cmd = tokenizer(line);
		if (!cmd)
			continue;
		status = _execute(cmd, argv);
	}

}
