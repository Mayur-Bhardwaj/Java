#include <stdio.h>

int main()
{
    int i,j,k, rows;
    printf("Enter the  rows:- ");
    scanf("%d",&rows);
    for(i=1; i<=6; i++){
        k=1;
        for(j=1;j<=6; j++){
            if(j<=i){
                printf("%d",k);
                k=1-k;
            }else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

//Output:-
// Enter the  rows:- 10
// 1     
// 10    
// 101   
// 1010  
// 10101
// 101010
