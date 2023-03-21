#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int a = 1;
	int b = 2;
	int sum = a + b;

	printf("%d, %d, ", a, b);
	for (i = 3; i <= 49; i++)
	{
	printf("%d, ", sum);
		a = b;
		b = sum;
		sum = a + b;
	}
	printf("%d\n", sum);
	return (0);
}
