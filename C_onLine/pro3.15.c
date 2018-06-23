#include<stdio.h>
int main(){
    int a,b,c,sum,average;

    printf("Enter The Three Values:");
    scanf("%d %d %d",&a,&b,&c);

    sum=a+b+c;
    printf("The Total Sumation is:%d\n",sum);

    average=((a+b+c)/3);
    printf("The Total average value is:%d\n",average);

    if(a>b && a>c){
        printf("The Largest Value A is:%d\n",a);
    }
    else if(b>c && b>a){
        printf("The Largest Value B is:%d\n",b);
    }
    else{
        printf("The Largest Value C is:%d\n",c);
    }


    if(a<b && a<c){
        printf("The Smallest Value A is:%d\n",a);
    }
    else if(b<c && b<a){
        printf("The Smallest Value B is:%d\n",b);
    }
    else{
        printf("The Smallest Value C is:%d\n",c);
    }


return 0;
}
