//A program that prints the square root of a number which is given by the user.
#include<stdio.h>
int main(){

    int n,result;
    printf("Enter the value: \n");
    scanf("%d",&n);
    result=sqrt(n);
    printf("Square root  is %d\n",result);
    return 0;
}
