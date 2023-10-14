#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Aprogram that generates random valid passwords for 101-crakme
 * Return:0
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2771 - sum) - '0' < 78)
		{
			n = 2771 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
