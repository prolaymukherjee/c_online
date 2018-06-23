#include<stdio.h>
int main(){
    int num,sum1,sum2,sum3,sum4,sum;

    printf("Enter The Number:");
    scanf("%d",&num);

    sum1=num%10;
    num=num/10;

    sum2=num%10;
    num=num/10;


    sum3=num%10;
    num=num/10;

    sum4=num%10;
    num=num/10;

    sum=sum1+sum2+sum3+sum4;

    printf("The Total Sumation is:%d",sum);

return 0;
}
