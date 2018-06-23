//A program converts earth days into jovian years where a year on jupiter takes about 12 Earth years.
#include<stdio.h>
int main(){
    float Jdays=4380.0,n;
    float res;
    printf("Enter The Days:");
    scanf("%f",&n);
    res=n/Jdays;
    printf("The Jopiter Days is%:%1f\n",res);


}
