#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - main func
 * @n: var 1;
 * Return: n;
 */

int sum_them_all(const unsigned int n, ...)
{
va_list vlist;
unsigned int i, sum = 0;
va_start(vlist, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(vlist, int);
}
va_end(vlist);
return (sum);
}
