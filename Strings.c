#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char string1[12] = "Hello";
char string2[12] = "world";
char string3[12];
strcpy(string3,string1); /// strcpy(dest ,source)
strcat(string1,string2); /// add string 2 to string 1
int length_string1 = strlen(string3);
printf("strcpy = %s \n",string3);
printf("strcat = %s \n",string1);
printf("strlen = %d \n",length_string1);
int value = strcmp(string1,string2);
printf("strcmp = %d \n",value);
return 0;
}
