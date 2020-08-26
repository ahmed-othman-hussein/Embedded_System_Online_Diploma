/*
 * vowel or consonant.c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */

#include<stdio.h>

void main(){
	char  x;
	printf("Enter an alphabet: ");
	fflush(stdout);
	scanf("%c",&x);
	switch (x){
	case'a':
	case'o':
	case'i':
	case'e':
	case'u':
		printf("%c is vowel",x);
		break;
	default:
		printf("%c is consonant",x);
		break;
	}

}
