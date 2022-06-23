#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

typedef struct printer
{
        char *input;
        void (*print_type)(va_list ap);
} print_t;

void print_char(va_list ap);
void print_int(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
