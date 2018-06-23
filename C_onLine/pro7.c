//Write a C program to calculate profit or loss.

#include<stdio.h>
int main(){
    int a,b,ans;
    printf("Enter The cost amount\n");
    scanf("%d",&a);
    printf("Enter The sell amount\n");
    scanf("%d",&b);
    if(a<b){
        ans=b-a;
        printf("The Profit is:%d\n",ans);
    }
    else if(a>b){
        ans=a-b;
        printf("The loss is:%d\n",ans);
    }
   return 0;
}
