#include <stdio.h>

int main(void)
{
	int u,v,temp;

	printf("Please type in 2 non-negative integers.\n");
	scanf("%i%i", &u, &v);

	while(v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	printf("There GCD is %i\n", u);
	return 0;
}