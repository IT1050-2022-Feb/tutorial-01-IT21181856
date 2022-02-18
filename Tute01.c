/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int m1,m2;
  float avg;
  printf("Mark 01: ");
  scanf("%d",&m1);
  printf("Mark 02: ");
  scanf("%d",&m2);
  avg=(m1+m2)/2.0;
  printf("average = %.2f",avg);
  
  return 0;
}

