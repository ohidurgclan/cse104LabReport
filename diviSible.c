/*-- Check a Number is Divisible by 5 and 11 --*/
#include <stdio.h>
void main(){
    int a;

    printf("Please Input a Number: . . . ");
    scanf("%d", &a);

    if ((a % 5 == 0) && (a % 11 == 0)){
        printf("%d is Divisible by 5 and 11.", a);
    }
    else{
        printf("%d is Not Divisible by 5 and 11.", a);
    }
}
