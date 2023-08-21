#include "main.h"
/**
 * _myputchar - function prints out the output
 * to the stdout.
 *
 * @c: character
 *
 * Return: 1.
 */
int _myputchar(char c)
{

	return (write(1, &c, 1));
}

/**
 * _myputs - function prints string.
 * @s: string.
 *
 * Return: number of charcters printed.
 */
int _myputs(char *s)
{
	int count = 0;

	if (s)
	{
		for (count = 0; s[count] != '\0'; count++)
		{
			_myputchar(s[count]);
		}
	}
	return (count);
}
