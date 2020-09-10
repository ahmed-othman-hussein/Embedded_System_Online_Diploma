/*
 * find frequency of character .c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */

#include<stdio.h>
int main(){
	int i,x=0;
	char t[50] ,c;

	printf("Enter a string:");
	fflush(stdout);fflush(stdin);
	gets(t);
	printf("Enter a character to find frequency:");
	fflush(stdout);fflush(stdin);
	scanf("%c",&c);

	for(i=0;t[i]!='\0';i++){
		if(t[i]==c){
			x++;
		}
	}
	printf("Frequency of %c = %d",c,x);

	return 0;
}
