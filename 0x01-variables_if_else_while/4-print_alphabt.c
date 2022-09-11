#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low = e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'q'; low++)
	{
		if (low != 'e' && low != 'q')
                	putchar(low);
	}
	        printf("\n");
	
	return (0);

}
