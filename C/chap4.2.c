#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, triangularNumber;

	triangularNumber = 0;

	n = 1;

	while (n <= 200) 
	{
		triangularNumber += n;
		n += 1;
	}
	printf("The 200th triangular number is %i\n", triangularNumber);

	return 0;
}
