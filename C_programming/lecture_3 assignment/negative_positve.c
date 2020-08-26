/*
 * negative or positive.c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */

#include<stdio.h>

void main(){
	float  x;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&x);
	if (x>0)
			printf("%f is positive",x);

		else if(x<0)
			printf("%f is negative",x);

    else
    	printf("number is zero",x);


}




