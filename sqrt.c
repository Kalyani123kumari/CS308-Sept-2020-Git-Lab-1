/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[]) {
// function to find sqrt
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
 	int i;
    	long val;
    	char *next;

	for (i = 1; i < argc; i++)
	{
		// Get value with failure detection.

		val = strtol (argv[i], &next, 10);

		// Check for empty string and characters left after conversion.

		if ((next == argv[i]) || (*next != '\0')) 
		{
		    	printf ("'%sDEBUG' is not valid\n", argv[i]);
		} 	
		else 
		{
			int input=atoi(argv[1]);
			if(input>0)
				printf("DEBUG Sqrt of %d is %f\n",input,sqrt(input));
			else
				printf("DEBUG Sqrt of %d is %f%s\n",input,sqrt(abs(input)),"i");
		}
   	}

	printf("DEBUG End of the program.Exiting\n");
	return(0);

} // end main
