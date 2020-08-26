/*
 * simple calculator.c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */

#include<stdio.h>

void main(){
	float  x,y,z=0;
	char c;
	printf("Enter operator either + or - or * or / : %c ",c);
	fflush(stdout);
	scanf("%c",&c);
	printf("Enter two operands ");
	fflush(stdout);
	scanf("%f\n%f",&x,&y);
	switch(c){
	case '+':
		z=x+y;
		break;
	case '-':
		z=x-y;
		break;
	case '*':
		z=x*y;
		break;
	case '/':
		z=x/y;
		break;
	default:
	{

	}
	}

	printf("%f %c %f = %f ",x,c,y,z);;

}




