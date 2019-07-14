#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/**
 * isnumber - determine if array is a number
 * @number: array
 *
 * Return: true or false
 */

bool isnumber(char number[])
{
	int j = 0;

	/* check for neg numbers */
	if (number[0] == '-')
	{
		printf("%d\n", 0);
		return (false);
	}

	while (number[j] != 0)
	{
		if (!isdigit(number[j]))
			return (false);
		j++;
	}
	return (true);
}

/**
 * main - make change with least amt of coins
 * Description: Coins = 25,10, 5, 2, 1
 * @argc: count of args
 * @argv: array of args
 * Return: 0
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i;
	int amt = 0;
	int change = 0;
	int coin = 0;
	char *coins[] = {"25", "10", "5", "2", "1"};

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	if (!isnumber(argv[1]))
	{
		return (1);
	}
	else
	{
		amt = atoi(argv[1]);

		for (i = 0; coins[i] != 0; i++)
		{
			coin = atoi(coins[i]);

			if (amt / coin > 0 && amt % coin == 0)
			{
				change += amt / coin;
				printf("amt is %d. coin is %d. change is %d\n", amt, coin, change);
				break;
			}
			if (amt / coin > 0)
			{
				change += amt / coin;
				amt %= coin;
				continue;
			}
		}
	}
	printf("%d\n", change);
	return (0);
}
