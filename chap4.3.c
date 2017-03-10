#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, triangleNum;
	printf("Table of Triangular Numbers\n\n");
	printf("n\t Sum of 1 to n\n");
	printf("--\t----------------\n");

	triangleNum = 0;

	n = 1;

	while(n <= 10)
	{
		triangleNum += n;
		printf("%i\t\t%i\n", n, triangleNum);
		++n;
	}
	return 0;
}