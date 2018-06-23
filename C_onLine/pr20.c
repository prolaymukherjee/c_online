#include<stdio.h>
int main(){
    int row,colsapce,colstar;

    for(row=1;row<=10;row++){
        for(colsapce=10-row;colsapce>=1;colsapce--){
            printf(" ");
        }
        for(colstar=1;colstar<=(row*2)-1;colstar++){

            printf("*");

        }
        printf("\n");

    }

    for(row=10;row<=1;row--){
        for(colsapce=1 ;colsapce<=10-row;colsapce++){
            printf(" ");
        }
        for(colstar=1;colstar<=(row*2)-1;colstar++){

            printf("*");

        }
        printf("\n");

    }


return 0;
}
