#include <stdio.h>
#include <stdlib.h>
int main()
{
 int marks=75;
 switch (marks)
 {
 case 97:
 case 95:
 case 90:
 case 85:
 printf("Excellent");
 break;
 case 75:
 case 70:
 printf("Very Good");
 break;
 case 60:
 printf("good");
 break;
 case 40:
 printf("Ok");
 break;
 default:
 printf("Grade unavailable");
 }
}
