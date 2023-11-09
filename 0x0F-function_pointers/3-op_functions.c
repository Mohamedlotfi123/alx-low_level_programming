#include "3-calc.h"
/**
 * op_add - add two integers
 * @a : first int
 * @b : second int
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integers
 * @a : first int
 * @b : second int
 *
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mulitply teo integers
 * @a : first int
 * @b : second int
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divid two numbers
 * @a : first int
 * @b : second int
 *
 * Return: divison
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modulo two numbers
 * @a : first number
 * @b : second number
 *
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
