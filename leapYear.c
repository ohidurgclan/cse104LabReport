/*-- Check Leap Year --*/
#include<stdio.h>
void main(){
int y;
   printf("Inter a Year: . . .");
   scanf("%d", &y);

   if (y % 400 == 0) {
      printf("\n\n%d is Leap Year.\n\n", y);
   }
   else if (y % 100 == 0) {
      printf("\n\n%d is not Leap Year.\n\n", y);
   }
   else if (y % 4 == 0) {
      printf("\n\n%d is Leap Year.\n\n", y);
   }
   else {
      printf("\n\n%d Is Not Leap Year.\n\n", y);
   }
}
