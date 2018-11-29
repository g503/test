#include <stdio.h>
#include "../swap/swap.h"

int main()
{
	int a = 10;
	int b = 20;

	printf("Stare wartosci: a = %d; b = %d.\n", a, b);
	swap(&a, &b);
	printf("Nowe wartosci: a = %d; b = %d.\n", a, b);

	return 0;
}
