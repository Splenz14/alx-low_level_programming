#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program assigned a random number to variable n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() -  RAND_MAX / 2;
/*your code goes there*/
if (n > 0)
{
printf("%d is %s\n", n, "positive");
}
e



























































#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program assigned a random number to the variable n
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		printf("%d is %s\n", n, "zero");
	}
	return (0);
}

