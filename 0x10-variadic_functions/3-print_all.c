void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);
	int i = 0;
	char *str;
	char c;
	float f;


	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				break;
		}

	
		i++;

	
		if (format[i])
			printf(", ");
	}


	printf("\n");
	va_end(args);
}

