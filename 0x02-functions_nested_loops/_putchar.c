#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character c to stdout
 *
 * @c: is the character to print
 *
 * Return: 1 (success). -1 (Nosuccess).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
