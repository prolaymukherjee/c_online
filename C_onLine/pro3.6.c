#include<stdio.h>
int main(){
    int PurPrice,salVal,YearOfSer,Depreciation;
    printf("Enter The Purchase Price:");
    scanf("%d",&PurPrice);
    printf("Enter The salvage value:");
    scanf("%d",&salVal);
    printf("Enter The Year Of year");
    scanf("%d",&YearOfSer);

    Depreciation=(PurPrice-salVal)/YearOfSer;

    printf("The Annul Depreciation:%d",Depreciation);


return 0;
}
