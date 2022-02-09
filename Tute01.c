/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int mark1,mark2;
   float avg;
   
   printf("enter mark1 and mark2 \n");
      scanf("%d,%d",&mark1,&mark2);
      
  avg = (mark1+mark2)/2;
   
   printf("avarage marks %.2f \n",avg);
  
  return 0;
}

