#include "shell.h"

/**
 * bfree: free pointer and NULLs the address
 * Return: (1) if freed OR (0) otherwise
 * coded by: Michael Mounes and Rozan Wally
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
