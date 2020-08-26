/*
 * factorial.c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */

#include<stdio.h>

void main(){
	int  x,i,factorial=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);
	if(x<0)
		printf("Error !!! Factorial of negative number dosen't exist");
	else if(x==0)
		factorial= 1;
	else
		for (i=1;i<=x;i++){
			factorial*=i;
		}

	printf("factorial = %d ",factorial);


}




