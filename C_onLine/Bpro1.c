#include<stdio.h>
int main(){
    int a,b,c,temp1,temp2,temp3;
    printf("Enter The Number:");
    scanf("%d %d %d",&a,&b,&c);

    temp1=a;
    a=b;
    b=temp1;


    temp2=b;
    b=c;
    c=temp2;

    temp3=c;
    c=a;
    a=temp3;


    printf("After swapping the value is:");
    printf("%d %d %d",a,b,c);




return 0;
}

