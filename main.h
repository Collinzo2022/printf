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

#endif
