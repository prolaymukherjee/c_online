#include<stdio.h>
int main(){

    int noOfRows;
    printf("Enter The Number of Row:)");
    scanf("%noOfRows",&noOfRows);

    int row,colspace,colstar;
    for(row=1;row<=noOfRows;row++){

        for(colspace=noOfRows-row;colspace>=1;colspace--){
            printf("");
        }
        for(colstar=1;colstar<=(row*2)-1;colstar--){
            printf("*")
        }

         printf("\n");
    }

return 0;
}

