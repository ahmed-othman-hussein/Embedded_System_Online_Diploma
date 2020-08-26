/*
 * largest number.c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */

#include<stdio.h>

void main(){
	float  x,y,z;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f\n %f\n %f",&x,&y,&z);
	if (x>y){
		if(x>z)
			printf("largest number = %f",x);

		else
			printf("largest number = %f",z);
	}

	else {
		if (y>z)

			printf("largest number = %f",y);

		else
			printf("largest number = %f",z);
	}

}




