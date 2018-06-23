#include<stdio.h>
int main(){
    int x,y,z;

    printf("Enter The Value Of X:");
    scanf("%d",&x);

    printf("Enter The Value Of Y:");
    scanf("%d",&y);

    printf("Enter The Value Of Z:");
    scanf("%d",&z);

    if(x>y && x>z){
        printf("The Largest Value is X:%d\n",x);
    }
    else if(y>z && y>x){
         printf("The Largest Value is Y:%d\n",y);
    }
    else{
         printf("The Largest Value is Z:%d\n",z);
    }
return 0;
}
