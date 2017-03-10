#include <stdio.h>

int main()
{
	int n, number, triangularNum;
	printf("What Triangular number do you want to calculate? \n");
	scanf("%i", &number);

	triangularNum = 0;

	n = 1;

	while(n <= number)
	{
		triangularNum += n;
		++n;
	}
	printf("Triangular number %i is %i\n", number, triangularNum);
	return 0;
}
