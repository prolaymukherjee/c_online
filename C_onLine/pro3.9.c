#include<stdio.h>
int main(){
    float Dr,Sc,Hc,TBO,EOQ;

    printf("Enter The Dr:\n");
    scanf("%f",&Dr);

    printf("Enter The Sc:\n");
    scanf("%f",&Sc);

    printf("Enter The Hc:\n");
    scanf("%f",&Hc);

    TBO=sqrt((2*Dr*Sc)/Hc);
    EOQ=sqrt((2*Sc)/(Dr*Hc));

    printf("The TBQ:%.2f\n",TBO);

    printf("The EOQ:%.2f\n",EOQ);


return 0;
}
