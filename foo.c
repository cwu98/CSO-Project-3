#include <stdio.h>

/*
 *author: Cary Wu
 *description: this file contains the implementation of foo function based on given/foo.o disassembled code
 */

long foo(long a, long b){
  long foo = 70*a;
  long result = (19*b)<<2;
  result = result + foo;
  long c = b-a;
  result = result+((c<<6)-2*c);
  return result;
}
