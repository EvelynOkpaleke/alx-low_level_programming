#include "main.h"
/**
 * _strcmp - compares two string values
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: value < 0 if string is < the other, value > 0 if string is > the other and 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
