#include "shell.h"

/**
* _strdup - fun to duplicate string
* @str: string to duplicate
* Return: the duplicated string
*/
char *_strdup(const char *str)
{
	char *ptr;
	size_t i, lenth = 0;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		lenth++;
		str++;
	}
	str = str - lenth;
	ptr = malloc(sizeof(char) * (lenth + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= lenth; i++)
		ptr[i] = str[i];
	return (ptr);
}

/**
* _strcmp - fun to compiare two strings
* @s1: pointer to the first string
* @s2: pointer to the second string
* Return: integer value
*/
int _strcmp(char *s1, char *s2)
{
	int cmp;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	cmp = (unsigned char)(*s1) - (unsigned char)(*s2);
	return (cmp);
}

/**
* _strlen - fun to return the lenth of string
* @s: the string
* Return: the lenth
*/
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
/**
* _strcat - fun to concatenate two strings
* @dest: destination ot concat
* @src: source string
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
	char *b = dest;

	while (*b)
		b++;
	while (*src)
	{
		*b = *src;
		b++;
		src++;
	}
	*b = '\0';
	return (dest);
}
/**
* _strcpy - fun to copy string
* @dest: dsetination
* @src: soource
* Return: the copy
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
