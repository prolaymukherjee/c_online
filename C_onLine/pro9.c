#include<stdio.h>
int main(){
    int a;
    printf("Enter The number:");
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf("This number is visible:");
    }
    else
        printf("This number is not visible:");

}
