#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int a = 0;
	char c;
	const char *s;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					c = (char)va_arg(args, int);
					a += putchar(c);
					break;
				case 's':
					s = va_arg(args, const char*);
					while (*s != '\0')
					{
						a += putchar(*s);
						s++
					}
					break;
				case '%':
					a += putchar('%');
					break;
				default:
					a += putchar('%');
					a += putchar(*format);
					break;
			}
		}
		else 
		{
			a += putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (a);
int main()
{
	_printf("Hi, %s! tommorow is %d %s.\n", "victor", 25, "June");

	return (0);
}
