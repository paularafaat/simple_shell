#include "shell.h"
/**
* _execute - function to execute commands
* @cmd: command to execute
* @argv: args
* Return: integer
*/
int _execute(char **cmd, char **argv)
{
	pid_t child;
	int status;

	child = fork();
	if (child == 0)
	{
		if (execve(cmd[0], cmd, environ) == -1)
		{
			perror(argv[0]);
			free_arr(cmd);
			exit(0);
		}
	}
	else
	{
		waitpid(child, &status, 0);
		free_arr(cmd);
	}
	return (WEXITSTATUS(status));
}
