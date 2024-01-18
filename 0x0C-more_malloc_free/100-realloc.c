#include "main.h"

/**
 * *_realloc - allocates a memory block using malloc and free.
 * @ptr: pointer to memory allocated with malloc(old_size).
 * @old_size: size in bytes, of the allocated space for ptr.
 * @new_size: size in bytes of the new memory block.
 *
 * Return: Null if new_size = 0 and ptr is not NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			 return (NULL);
		return (p);
	}


