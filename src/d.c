#include "../include/reqs.h"
#include <stdarg.h>

int	d(void *args)
{
	va_list	args;
	va_start(args, str);
	int x = va_arg(args, int);
    printf("x: %d\n", x);
	return (0);
}