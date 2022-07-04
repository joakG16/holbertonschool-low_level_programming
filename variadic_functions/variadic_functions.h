#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC

#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format_t - struct
 *
 * @type: The types of arguments passed to the function
 * @type_func: The function that performs acording
 * to the actual argument passed
 */
typedef struct format_t
{
	char type;
	void (*print_type)(va_list args);
} fmt_t;

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_str(va_list args);

#endif
