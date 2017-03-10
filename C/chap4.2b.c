#include <stdio.h>

int main(void)
{
	int n, triangularNum;

	triangularNum = 0;

	for(n = 1; n <=200; n += 1)
	{
		triangularNum += n;
	}
	printf("The 200th triangular number is %i\n", triangularNum);
	return 0;
}
