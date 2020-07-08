
// return 42.
int computerAge()
{
	return 42;
}


//function that does some comments about the user age.
void userAgeComments(int age, char host[])
{
	if(age >= 0x41 && age <= 0x7A)
	{
		printf("%s: wow, i was expecting a number...\n", host);
	}

	if(age >= 1 || age <= 999){

		if(age >= 50)
		{
			printf("%s: wow, you're slightly older than me!\n", host);
		}
		else 
		{
			if(age == 42)
			{
				printf("%s: I know how it feels like... I believe this age is magical.\n", host);
			}
			else 
			{
				printf("%s: you are young, aren't you? \n", host);
			}
		}
	}
}
