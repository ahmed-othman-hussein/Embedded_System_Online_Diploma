/*
 * Average .c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */

#include<stdio.h>

int main(){
	int i,x;
	float a[100],sum=0,Average ;

	printf("Enter the numbers of data:");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);

	for(i=0;i<x;i++){

		printf("%d.Enter number: ");
		fflush(stdout);fflush(stdin);
		scanf("%f",&a[i]);
		sum+=a[i];


	}
	Average=sum/x;
	printf("Average = %2.2f ",Average);

	return 0;
}
