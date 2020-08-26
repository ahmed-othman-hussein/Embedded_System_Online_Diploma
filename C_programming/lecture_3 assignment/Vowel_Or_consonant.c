/*
 * Vowel or consonant .c
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
		case'A':
		case'o':
		case'O':
		case'i':
		case'I':
		case'e':
		case'E':
		case'u':
		case'U':
			printf("%c is vowel",x);
			break;
		default:
			printf("%c is consonant",x);
			break;
		}
}




