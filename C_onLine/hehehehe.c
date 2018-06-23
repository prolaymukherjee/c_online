#include<stdio.h>
int main(){

    int i,num,sum=0;
    printf("1+2+3+4+........+n\n");
    printf("Enter The Number:)");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=i*i*i;
    }

    printf("%d",sum);

return 0;
}

