#include <stdio.h>
#include <stdlib.h>
///A pointer is a variable whose value is the address of another variable
void getValue(int *my_pointer)
{
 *my_pointer = 10000;/// &get_the_value=10000
 return;
}
int main()
{
 int get_the_value;
 getValue(&get_the_value);
 printf("the value of get_the_value = %d",get_the_value);
}
