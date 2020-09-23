/*
 * Prime check .c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */

#include <stdio.h>

int main ()
{
	int num1, num2, i, j, flag;

	printf("Enter two numbers(intervals): ");
	fflush(stdin);   fflush(stdout);
	scanf("%d %d", &num1, &num2);

	printf("Prime numbers between %d and %d are:\n", num1, num2);
	// Displaying prime number between num1 and num2
	for (i = num1 + 1; i < num2; ++i)
	{
		flag = 0; //flag is set to 0
		for (j = 2; j <= i/2; ++j)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0) //if flag == 0, then display i
			printf("%d\t", i);
	}
	return 0;
}
