#include<stdio.h>
int main(){
    int m,n,x;

    printf("Enter the values of M:");
    scanf("%d",&m);

    printf("Enter the values of N:");
    scanf("%d",&n);

    x=m%n;

    if(x==0){
        printf("M is multiply By N.");
    }
    else
        printf("M is not multiply By N.");


return 0;
}
