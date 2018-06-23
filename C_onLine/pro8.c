//Write a C program to input week number and print week day.
#include<stdio.h>
int main(){
    int days;
    printf("Enter The days1 to 7:\n");
    scanf(" %d",&days);
    if(days==1){
        printf("saterday\n");
    }
     else if(days==2){
        printf("sunday\n");
    }
     else if(days==3){
        printf("monday\n");
    }
     else if(days==4){
        printf("tuesday\n");
    }
     else if(days==5){
        printf("wednesday\n");
    }
     else if(days==6){
        printf("Thesrsday\n");
    }
    else if(days==7){
        printf("Friday\n");
    }

return 0;
}
