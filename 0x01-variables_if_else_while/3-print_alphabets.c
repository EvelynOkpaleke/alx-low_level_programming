#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
ch = 'A';
while (ch <= 'Z')
{
	putchar(ch);
	ch++;
}
putchar('\n')
return 0;
}
