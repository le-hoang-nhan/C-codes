#include <stdio.h>
#include <stdlib.h>
int main()
{
int age;
printf("Please enter the age ");
scanf("%d",&age);
if (age > 18/* condition goes here */) {
 /* if the condition is non-zero (true), this code will execute */
 printf("The age is greater then 18 \n");
 if(age < 21)
 {
 printf("The age is greater then 18 but less then 21");
 }else{
 printf("The age is greater then 18 but not less then 21");
 }
 } else if (age == 18)
 {
 printf("The age is equal to 18");
 } else
 {
 printf("The age is not greater then or equal to 18");
 }
}
