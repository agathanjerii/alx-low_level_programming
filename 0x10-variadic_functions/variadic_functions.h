#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
/**
 * struct print - print type with corresponding print function
 * @type: indicated the data type
 * @func: function pointer to function to print data type
 */

typedef struct print
{
	char *type;
	void (*func)(va_list arg);
} print_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#endif
