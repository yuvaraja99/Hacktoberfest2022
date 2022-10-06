// C program to demonstrate for loop
#include <stdio.h>

int main()
{
	int gfg = 0;
	// 'gfg' <= 5 is the check/test expression
	// The loop will function if and only if 'gfg' is less
	// than 5
	//'gfg++' will increments it's value by this so that the
	// loop can iterate for further evaluation

	for (gfg = 1; gfg <= 5; gfg++) // conditional statement
	{
		printf("GeeksforGeeks\n"); // statement will be printed
	}
	
	// Return statement to tell that everything executed
	// safely
	return 0;
}
