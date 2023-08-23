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

	while (*s)
	{
		_myputchar('s');
		count++;
		s++;
	}

	return (count);
}

/**
 *_print_integers - function prints integers.
 *@n: number.
 *
 * Return: number of integers passed.
 */
int _print_integers(long n)
{
	int i = 0, count = 0, neg = 0;
	char buffer[BUFFER_SIZE];

	if (n == 0)
	{
		buffer[i++] = '0';
		write(1, buffer, i);
		return (1);
	}
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}

	while (n != 0)
	{
		buffer[i++] = (n % 10) + '0';
		count++;
		n /= 10;
	}

	if (neg < 0)
	{
		buffer[i++] = '-';
		count++;
	}

	buffer[i] = '\0';
	_reverse_string(buffer, i);
	write(1, buffer, i);

	return (count);
}
/**
 * _reverse_string - reverse the order of characters
 * in a given string.
 * @s:string to be reversed.
 * @len: length of the string.
 */
void _reverse_string(char *s, int len)
{

	int first = 0, last;
	char temp;

	for (first = 0, last = len - 1; first < last; first++, last--)
	{
		temp = s[first];
		s[first] = s[last];
		s[last] = temp;
	}
}



