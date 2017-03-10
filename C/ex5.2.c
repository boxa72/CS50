#include <stdio.h>

int main(void)
{
	int n, n2, n3;

	printf("n\t  n2 \t\tn3\n");
	printf("---\t---------  ---------------\n");

	for(n = 1; n <= 20; ++n)
	{
		n2 = n * n;
		n3 = n * n * n;
		printf("%2i\t%6i\t%10i\n", n, n2, n3);
	}
	return 0;
}
