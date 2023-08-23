#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _myputchar(char c);
int _myputs(char *s);
int _print_integers(long n);
void _reverse_string(char *s, int len);
int _print_percent(void);
int _print_chars(char c);

/*handles conversion of specifiers*/
int _conversion(const char *format, va_list args);


#endif
