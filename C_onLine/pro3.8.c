#include<stdio.h>
int main(){
    int u,T,a,t;

    printf("Enter the intial velocity:");
    scanf("%d",&u);
    printf("Enter The acclearation:");
    scanf("%d",&a);
    printf("Enter The Time:");
    scanf("%d",&t);

    T=((u*t)+(a*t*t))/2;

    printf("The Total value is:%d",T);


return 0;
}
