#include <unistd.h>

/**
 * _putchar - writing character c to standard output
 * @c: Character to be printed
 * Return: 1 on success
 * On error: return -1, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
