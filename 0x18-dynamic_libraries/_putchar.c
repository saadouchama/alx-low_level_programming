#include <unistd.h>

#define BUFFER_SIZE 1024


/**
 * _memset - fills memory with a constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes to fill
 */
void _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @count: The number of characters printed
 */
void _putchar(char c, void *count)
{
	write(STDOUT_FILENO, &c, 1);
	*(int *)count += 1;
}
