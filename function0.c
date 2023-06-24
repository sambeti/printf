#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int start = 0;
	char c;
	const *s;

	while (*format != '\0')
	{
		format++;
		switch (*format)
		{
			case 'c':
				c = (char)va_arg(args, int);
				start += putchar(c);
				break;
			case 's':
				s = va_arg(args, const char*);
				while (*s != '\0')
				{
					start += putchar(*s);
					s++;
				}
				break;
			case '%':
				start += putchar('%');
				start += putchar(*format);
				break;
		}
	}
	else
	{
		start += putchar(*format);
	}
	format++;
}
va_end(args);
return (a);

int main(void)
{
	_printf("Hi, %s! Today is %d %s. \n", "Samuel", 25, "June");
	return (0);
}
