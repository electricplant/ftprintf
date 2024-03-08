#include "reqs.h"

int ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	const int (*print_oper[])(void *args) = {d};

	//in the fucntion d for example, call (args, int)

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		//count each char printed
		if (str[i] == '%')
			{
				i++;
				print_oper[(str[i])](&args); //put index of args
			}
	}
}


int main(void)
{
	ft_printf("I have %d chicken nuggets. %d of them are spicy", 5, 3);
}