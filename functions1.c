/**
 * _print_chars - print cahracters.
 * @c: character printed.
 * Return: number of characters printed.
 */
int _print_chars(char c)
{
        int count = 0;

        write(1, "&c", 1);
        count++;

        return (count);
}

