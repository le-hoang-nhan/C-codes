#include <stdio.h>
#include <stdlib.h>
int ArraySum(int MyArray[],int size)
{
 int sum = 0;
 for(int i=0; i < size ;i++)
 {
 ///sum = sum + MyArray[i];
 sum += MyArray[i];
 }
 return sum;
}
int main()
{
 int MyNumberArray [8] = {20,30,60,50,55,30,100,100};///245 +100 +100 =445
 int sum_of_array = ArraySum(MyNumberArray, 8);
 printf("Arra Sum = %d ",sum_of_array);
}
