#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all - prints anything.
  *@format: list of all arguments type passed to the function.
  *
  *Return: void.
  */
void print_all(const char * const format, ...)
{
	unsigned int count;
	va_list argtp;
	char *s, *separator;

	va_start(argtp, format);

	separator = "";

	count = 0;
	while (format && format[count])
	{
		switch (format[count])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(argtp, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(argtp, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(argtp, double));
				break;
			case 's':
				s = va_arg(argtp, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				count++;
				continue;
		}
		separator = ", ";
		count++;
	}

	printf("\n");
	va_end(argtp);
}
