#include <stdio.h>

int main()
{
    int i,j;
    char k;
    for(i=1; i<=4; i++){
        k='A';
        for(j=1; j<=7;j++){
            if(j<=5-i || j>=3+i){
                printf("%c",k);//To print variable we use "%c".
              j<4 ? k++ : k--;
            // k++;
            }
            else{
                printf(" ");
                if(j==4)
                k--; //To remove the extra increment in k 
            }
        }
        printf("\n");
    }

    return 0;
}

//Output:-
// ABCDCBA
// ABC CBA
// AB   BA
// A     A