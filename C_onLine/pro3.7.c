#include<stdio.h>
int main(){
    float number;
    int smallesInt,longerInt;

    printf("Enetr The Number:");
    scanf("%f",&number);

    smallesInt=(int)number;
    longerInt=(int)number+1;

    printf("The seris of:%.2f  %d   %d\n",number,smallesInt,longerInt);

return 0;
}
