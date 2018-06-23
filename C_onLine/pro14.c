#include<stdio.h>
int main(){
    int i;
    printf("Enter The year:\n");
    for(i=0;i<=5;i++){
    scanf("%d",&i);
    }
    if((i%4)!==0 || (i%100)!==0 || (i%400)!==0 ){
        printf("This is leap Year.");
    }
    else{
         printf("This is not leap Year.");
    }
    return 0;
}
