#include "shell.h"

/**
 *_eputs: print input string
 * Return: Nothing
 * coded by: Michael Mounes and Rozan Wally
 */
void _eputs(char *str)
{
	int i = 0;
	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar: write the character c to stderr
 * Return: (0) IF success, (1) on error, (-1) is returned OR errno is set appropriately
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];
	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd: write the character c to given fd
 * Return: (0) IF success, (1) on error, (-1) is returned OR errno is set appropriately
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];
	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 *_putsfd: print input string
 * Return: number of chars put
 */
int _putsfd(char *str, int fd)
{
	int i = 0;
	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
