#include <stdio.h>
#include <stdlib.h>
int main()
{
///The ternary (conditional) operator in C
int a=25,b=20;
int c ;
///(/* logical expression goes here */) ? (/* if non-zero (true) */) : (/* if 0
(false) */)
c = (a > b) ? b : a;
printf("ans = %d",c);
}
