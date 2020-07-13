  
/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   operations header                                			      */
/*                                                     			      */
/*   By: bielzin42 <nickspoot@gmail.com>                		      */
/*                                                           		      */
/*                                                                            */
/* ************************************************************************** */


//operation that sum two values.
double ft_sum(double firstValue, double secondValue)
{
	return firstValue + secondValue;
}


//operation that subtract one value from another a - b.
double ft_sub(double firstValue, double secondValue)
{
	return firstValue - secondValue;
}

//operation that multiplies two values a * b.
double ft_mult(double firstValue, double secondValue)
{
	return firstValue * secondValue;
}

//operation that divides one value bt another a / b.
double ft_div(double firstValue, double secondValue)
{
	return firstValue / secondValue;
}

//operation that shows the rest of an division.
int ft_rest(int firstValue, int secondValue)
{
	return firstValue % secondValue;
}

//operation that shows the absolute value of a number.
int ft_absolute(int value)
{
	return abs(value);
}
