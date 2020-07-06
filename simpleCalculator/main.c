#include <stdio.h>
#include <stdlib.h>

double ft_sum(double firstValue, double secondValue);
double ft_sub(double firstValue, double secondValue);
double ft_mult(double firstValue, double secondValue);
double ft_div(double firstValue, double secondValue);

void main()
{
	int chose = 0;
	int repeat;

	double firstValue;
	double secondValue;


	while(repeat == 0){

		if(chose == 0)
		{
			printf("Do you want to do any operation? 												\n1 - sum \n2 - sub \n3 - multiplication 											\n4 - division \n5 - Exit program\n");

			scanf("\n%d", &chose);
		}
	
		if(chose == 1)
		{
			printf("\nInsert the first value: \n");
			scanf("%lf", &firstValue);

			printf("\nInsert the second value: \n");
			scanf("%lf", &secondValue);

			printf("\nThis is the result of the sum of the two values: %lf", 
					ft_sum(firstValue, secondValue));

			printf("\nDo you want to repeat any operation?: \n 0 - true \n 5 - false \n");
			scanf("%d", &repeat);
			chose = repeat;
		}
	
		if(chose == 2)
		{
			printf("\nInsert the first value: \n");
			scanf("%lf", &firstValue);

			printf("\nInsert the second value: \n");
			scanf("%lf", &secondValue);

			printf("\nThis is the result of the subtraction of the two values: %lf",
					ft_sub(firstValue, secondValue));
			printf("\nDo you want to repeat any operation? \n 0 - true \n 5 - false \n");
			scanf("%d", &repeat);;
			chose = repeat;
		}

		if(chose == 3)
		{
			printf("\nInsert the first value: \n");
			scanf("%lf", &firstValue);

			printf("\nInsert the second value: \n");
				scanf("%lf", &secondValue);

			printf("This is the result of the multiplication of the two numbers: %lf", 
					ft_mult(firstValue, secondValue));
			printf("\nDo you want to repeat any operation? \n 0 - true \n 5 - false \n");
			scanf("%d", &repeat);
			chose = repeat;
		}

		if (chose == 4)
		{
			printf("\nInsert the first value: \n");
			scanf("%lf", &firstValue);

			printf("\nInsert the second value: \n");
			scanf("%lf", &secondValue);

			printf("This is the result of the division of the two numbers: %lf", 
					ft_div(firstValue, secondValue));
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
