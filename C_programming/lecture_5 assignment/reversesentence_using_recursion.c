/*
 * reverse sentence using Recursion .c
 *
 *  Created on: Aug 25, 2020
 *      Author: ahmed
 */
#include <stdio.h>
void reverse();
int main() {
    printf("Enter a sentence: ");
    fflush(stdin);    fflush(stdout);

    reverse();
    return 0;
}

void reverse() {
    char a;
    scanf("%c", &a);
    if (a != '\n') {
        reverse();
        printf("%c", a);
    }
}
