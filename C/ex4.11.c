#include <stdio.h>
#include <string.h>

int main(void)
{
	int result, number, sum, remainder;

	printf("Please enter your number: \n");
	scanf("%i", &number);

	result = number;

	while (result != 0)
	{
		remainder = result % 10;
		sum += remainder;
		result /= 10;
	}
	printf("Sum of digits %i = %i\n", number, sum);

	return 0;
}
