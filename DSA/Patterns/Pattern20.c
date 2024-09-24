#include <stdio.h>

int main()
{
    int i,j,k=0;
    for(i=1; i<=9; i++){
        // k++;/
          i<=5 ? k++ : k--;
        for(j=1; j<=5; j++){
            if(j>=6-k){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

//Output:-
//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
//     *