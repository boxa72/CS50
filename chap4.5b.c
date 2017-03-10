#include <stdio.h>

int main(void)
{
	int i, n, num, numTimes, triangularNum;

	triangularNum = 0;

	printf("How many Triangular Numbers would you like to calculate? \n");
	scanf("%i", &numTimes);

	i = 0;

	for(i = 0;i < numTimes; ++i)
	{
		printf("What number would you like to calculate? \n");
		scanf("%i", &num);

		triangularNum = 0;

		n = 1;

		while (n <= num)
		{
			triangularNum += n;
			++n;
		}
		printf("Triangular number %i is %i\n", num, triangularNum);
	}
	return 0;
}
