#include <stdio.h>
#include <stdlib.h>
/*
 *author: Cary Wu
 *description: implementation of bar function based on disassembled version of bar.o object file
 */


/*foo function:
 *input: parameters long a, long b
 *output: long ret
 *bar function overall performs arithmetic expressions on the two parameters and uses a while loop to add the overall expression (a<<4)+2*b-(b<<4)+19 to the variable ret while a<=b.
 */
long bar (long a, long b){
  long temp1 = b<<4;
  long ret = 0;
  long var = (a<<4) + 2*b - temp1 + 19;
 
  while (a <= b){
    a = a + 1;
    ret = ret + var;
  }
  return ret;
}
