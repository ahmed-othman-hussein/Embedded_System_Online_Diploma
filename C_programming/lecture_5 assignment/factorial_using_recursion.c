/*
 * factorial using Recursion .c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */

#include <stdio.h>
int factorial(int n);

int main() {
	int n,f;
	printf("Enter a positive integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	f=factorial(n);
	printf("Factorial of %d = %d", n, f);
	return 0;
}

int factorial(int n) {
	if (n>=1)
		return n*factorial(n-1);
	else
		return 1;
}
