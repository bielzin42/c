#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "simpleConv.h"

void main(int argc, char *argv[])
{	
	//get the computer name	
	int hostname;
	char hostbuffer[256];
	hostname = gethostname(hostbuffer, sizeof(hostbuffer));

	//getting user info
	char userName[256];
	int userage;
	
	//conversation
	printf("\nHi, my name is %s, what about you?\n", hostbuffer);
	printf("insert your name: "); 
	scanf("\n%s", userName);
	
	printf("\n%s: hi %s!\n", hostbuffer, userName);
	printf("\n%s: I have %d years old. How old are you %s? \n",
		       	hostbuffer, computerAge(), userName);
	scanf("%d", &userage);

		if(userage >= 50)
		{
			printf("\nwow, you are slightly older than me!\n");
		} 
		if(userage == 42)
		{
			printf("\ni know how it feels like... I believe this age is magical.\n");
		} 
	 	if( userage < 42)
		{
			printf("\n you are youg, aren't you?\n");
		}
		
}
