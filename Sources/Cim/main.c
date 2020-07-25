#include <stdio.h>
#include <stdlib.h>
#include "operations.h"
#include "launch.h"

void main()
{
	int chose = 0;
	int repeat = 0;

	double firstValue;
	double secondValue;
	
	ft_launch();
	
	while(repeat == 0)
	{

		if(chose == 0)
		{
			printf("Do you want to do any operation?");
			printf("\n1 - sum \n2 - sub \n3 - multiplication");
			printf("\n4 - division \n5 - Exit program\n");
			scanf("\n%d", &chose);
		}
	
		if(chose == 1)
		{
			printf("\nThis is the result of the sum of the two values: %lf", 
					ft_sum());

			printf("\nDo you want to repeat any operation?: \n 0 - true \n 5 - false \n");
			scanf("%d", &repeat);
			chose = repeat;
		}
	
		if(chose == 2)
		{
			printf("\nThis is the result of the subtraction of the two values: %lf",
					ft_sub());
			printf("\nDo you want to repeat any operation? \n 0 - true \n 5 - false \n");
			scanf("%d", &repeat);;
			chose = repeat;
		}

		if(chose == 3)
		{
			printf("This is the result of the multiplication of the two numbers: %lf", 
					ft_mult());
			printf("\nDo you want to repeat any operation? \n 0 - true \n 5 - false \n");
			scanf("%d", &repeat);
			chose = repeat;
		}

		if (chose == 4)
		{
			printf("This is the result of the division of the two numbers: %lf", 
					ft_div());
			printf("\nDo you want to repeat any operation? \n 0 - true \n 5 - false \n");
			scanf("%d", &repeat);
			chose = repeat;
		}
	
		if(chose == 5)
		{
			break;
		}
	}

}
