#include <stdio.h>

// created factorial function & returned %lli in case it has to return
// a monster number

long long factor(int n);

long long factor(int n)
{

	// as above
	long long result;
	{
		if (n == 1)
		{
			return 1;
		}
		else
		{
			result = n * factor(n - 1);
			return result;
		}
	}
}


int main()
{
    printf("%lli\n",factor(20));

	return 0;
}
