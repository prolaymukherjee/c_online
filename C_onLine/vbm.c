#include<stdio.h>
int main(){

    int noOfRows;
    printf("Enter The Number of Row:)");
    scanf("%d",&noOfRows);

    int row,colspace,colstar;
    for(row=noOfRows;row>=1;row--){

        for(colspace=noOfRows-row;colspace>=1;colspace--){
            printf(" ");
        }
        for(colstar=1;colstar<=(row*2)-1;colstar++){
            printf("*");
        }

         printf("\n");
    }

return 0;
}



