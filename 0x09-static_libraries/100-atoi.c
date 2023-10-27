#include <stdio.h>
/**
 * my_atoi - convert to intger
 * @str : string to be converted
 *
 * Return: result of the converstion
 */
int my_atoi(const char *str)
{
	int result = 0;
	int sign = 1;

	while (*str && (int)*str <= 32)
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
	sign = *str == '+' ? 1 : -1;
	str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	result *= sign;
	return (result);
}

