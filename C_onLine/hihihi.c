#include<stdio.h>
int main(){

    int i,j,n,sum;
    printf("1+(2+3)+(4+5+6)+........+n\n");
    printf("Enter The Number:)");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         for(j=1;j<=i;j++){
        sum+=n;

        }
    }

    printf("%d",sum);

return 0;
}

