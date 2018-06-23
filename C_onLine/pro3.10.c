#include<stdio.h>
int main(){
     float L,R,C,Fre;

    printf("Enter The Inductance  Resistance:");
    scanf("%f %f",&L,&R);

    for(C=.01;C<=.1;C=C+.01){
    Fre=sqrt((1/(L*C))-((R*R)-(4*C*C)));
    printf("\nThe Capacitanceis:%0.2f, Frequency is:%0.3f Hz\n",C,Fre);
}

return 0;
}
