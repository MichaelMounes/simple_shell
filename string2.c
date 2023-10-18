#include "shell.h"

/**
 * _strcpy: copies string
 * Return: pointer to destination
 * coded by: Michael Mounes and Rozan Wally
 */
char *_strcpy(char *destination, char *src)
{
	int i = 0;
	if (destination == src || src == 0)
		return (destination);
	while (src[i])
	{
		destination[i] = src[i];
		i++;
	}
	destination[i] = 0;
	return (destination);
}
/**
 * _strdup: duplicate string
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;
	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}
/**
 *_puts: print input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int i = 0;
	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * _putchar: write the character c to stdout
 * Return: (1) if success,
 *         if error: (-1) is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int i;
	static char buffer[WRITE_BUF_SIZE];
	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buffer[i++] = c;
	return (1);
}
