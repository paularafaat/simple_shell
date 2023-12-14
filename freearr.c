#include "shell.h"
/**
* free_arr - function to free array
* @s: array to free
* Return: nothing
*/
void free_arr(char **s)
{
	int i;

	if (!s)
		return;

	for (i = 0; s[i]; i++)
	{
		free(s[i]);
		s[i] = NULL;
	}
	free(s);
	s = NULL;

}
