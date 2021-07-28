#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <string>

void printOddOrEven(int number)
{
	if (number % 2 == 0)
	{
		printf("EVEN\n");
	}
	else
	{
		printf("ODD\n");
	}
}

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("No program arguments found.\n");
	}


	int number = atoi(argv[1]);

	if (number != NULL) 
		{
			printOddOrEven(number);
		}
	else
		{
			printf("NAN\n");
		}


	return 0;
}