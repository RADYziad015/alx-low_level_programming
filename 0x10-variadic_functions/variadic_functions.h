#ifndef VARIADIC_H_
#define VARIADIC_H_

#include <stdarg.h>
#include <stdio.h>

/**
 * struct token - struct token
 *
 * @token: format token
 * @f: the function associated
 */
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int_putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
