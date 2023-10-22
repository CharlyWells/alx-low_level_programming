#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints all alphabets in lowercase
 * followed by a new line
 * written by charlotte
 */

void print_alphabet_x10(void){
int i;

for(i=0; i<9; i++){
    char j;
    for(j='a'; j<='z'; j++)
       _putchar(j);
      _putchar('\n');
}
}
