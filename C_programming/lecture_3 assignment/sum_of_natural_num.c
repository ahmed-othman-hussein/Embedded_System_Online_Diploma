/*
 * sum f natural numbers.c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */

#include<stdio.h>

void main(){
	int  x,i,sum=0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);

	for (i=1;i<=x;i++){
		sum+=i;
	}
	printf("sum = %d ",sum);;


}




