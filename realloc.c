#include "shell.h"

/**
 * _memset: fill memory with constant byte
 * Return: (s) pointer to memory area s
 * coded by: Michael Mounes and Rozan Wally
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
 * ffree: free string of strings
 */
void ffree(char **pp)
{
	char **a = pp;
	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}
/**
 * _realloc: reallocate a block of memory
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
