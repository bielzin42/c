#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include "simpleConv.h"

//´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´//
//							 //
// program that does a simple conversation with the user.//
//							 //
//							 //
//							 //
//  			08.07, 2020, Gabriel Lima	 //
//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,//  			


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
	printf("Gabriel: ");
	scanf("%d", &userage);

	userAgeComments(userage, hostbuffer);
		
}
