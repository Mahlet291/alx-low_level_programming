#include "main.h"
/**
 * _pow_recursion- returns the value of x to the power of y
 * @x: the base
 * @y: the exponent
 * Return: returns the final value
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
return (x * _pow_recursion(x , y-1);
return (1);
}
