#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to reallocate
 * @old_size: original size of ptr memory block
 * @new_size: new size of ptr memory block
 * Return: pointer to reallocated memory, or NULL if malloc
 *	   fails or new_size is 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ret = ptr;
	char *tmp;

	if (!new_size && ptr)
	{
		free(ret);
		return (NULL);
	}

	if (new_size > old_size)
	{
		tmp = ptr;
		ret = malloc(new_size);
		if (ret)
			while (old_size--)
				ret[old_size] = tmp[old_size];
		free(tmp);
	}
	return (ret);
}
