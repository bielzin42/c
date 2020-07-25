  
/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   operations header                                			      */
/*                                                     			      */
/*   By: bielzin42 <nickspoot@gmail.com>                		      */
/*                                                           		      */
/*                                                                            */
/* ************************************************************************** */

//function that get the two values.

double firstValue;
double secondValue;

int ft_getValues()
{
	fflush(stdin);

	printf("Please, insert the first value: ");
	scanf("%lf", &firstValue);

	printf("Please, insert the second value: ");
	scanf("%lf", &secondValue);

	return 0;
}


//operation that sum two values.
double ft_sum()
{
	ft_getValues();
	return firstValue + secondValue;
}


//operation that subtract one value from another a - b.
double ft_sub()
{
	ft_getValues();
	return firstValue - secondValue;
}

//operation that multiplies two values a * b.
double ft_mult()
{	
	ft_getValues();
	return firstValue * secondValue;
}

//operation that divides one value bt another a / b.
double ft_div()
{
	ft_getValues();
	return firstValue / secondValue;
}

//operation that shows the rest of an division.
int ft_rest(int firstVal, int secondVal)
{
	return firstVal % secondVal;
}

//operation that shows the absolute value of a number.
int ft_absolute(int value)
{	
	return abs(value);
}
