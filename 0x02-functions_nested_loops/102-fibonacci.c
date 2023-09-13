#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int i, first = 1, second = 0, next;
	printf("%d, %d, ", first, second);
	for (i = 3; i <= 50; i++)
	{
		next = first + second;
		printf("%d, ", next);
		first = second;
		second = next;
		
	}
printf("\n");
return (0);

}
