#include <stdio.h>
double getAverage(int arr[ ], int size);
void main ()
{
 int balance[5] = {1000, 2, 3, 17, 50};
 float avg;
 avg = getAverage( balance, 5 ) ;
 printf( "Average value is: %f ", avg );
} 
float getAverage(int arr[ ], int size)
{
 int i;
 float avg;
 float sum;
 for (i = 0; i < size; ++i)
 {
 sum += arr[i];
 } 
  avg = sum / size;
 return avg;
} 