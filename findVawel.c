/*-- Find Vawel or Consonent. --*/
#include <stdio.h>
void main(){
  char x;

    printf("Enter a Alphabet: . . .");
    scanf("%c",&x);
    if((x>='A' && x<='Z') || (x>='a' && x<='z')){
        switch(x){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("\n\nThis Alphabet %c is a Vowel.\n\n",x);
                break;
            default:
                printf("\nThis Alphabet %c is a Consonant.\n\n",x);
        }
    } else{
        printf("\n\nSorry! Invalid Input.\n\n",x);
    }
}
