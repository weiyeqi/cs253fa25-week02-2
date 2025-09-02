/*
Lecture: week02-2
Author: Yeqi Wei
*/
#include <stdio.h>   // include header files: stdio.h, meaning standard input/output header file.
#define TENYEAR 10
#define TENYEARAGO(x) x - 10

int main(void) {
   int year;
   printf("Enter the year: ");
   scanf("%d", &year);
   printf("This year is: %d.\n", year);   // print the variable year
   printf("10 years ago is: %d.\n", year - 10);
   printf("10 years ago is: %d.\n", year - TENYEAR);
   printf("10 years ago is: %d.\n", TENYEARAGO(year));

   printf("The address of variable year: %p.\n", &year); 
   /*
   &year means the address/reference/pointer of variable year;
   %p, meaning formatted the &year into a pointer format.
   */
   return 0;
}
