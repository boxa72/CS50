#include <stdio.h>

int main(void)
{
	int n, triangleNum;

	printf("Table of Triangular Numbers\n\n");
	printf("n\t Sume of 1 to n\n");
	printf("--\t---------------\n");

	triangleNum = 0;

	for(n = 1; n <= 10; ++n)
	{
		triangleNum += n;
		printf("%i\t\t%i\n", n, triangleNum);
	}
	return 0;
}
