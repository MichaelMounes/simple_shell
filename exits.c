#include "shell.h"

/**
 * _strncpy: copie string
 * Return: concatenated string
 * coded by: Michael Mounes and Rozan Wally
 */
char *_strncpy(char *destination, char *src, int n)
{
	int i, j;
	char *s = destination;
	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		destination[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			destination[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * _strncat: concatenate two strings
 * Return: concatenated string
 */
char *_strncat(char *destination, char *src, int n)
{
	int i, j;
	char *s = destination;
	i = 0;
	j = 0;
	while (destination[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		destination[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		destination[i] = '\0';
	return (s);
}

/**
 * _strchr: locates a character in a string
 * Return: (s) pointer to memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');
	return (NULL);
}
