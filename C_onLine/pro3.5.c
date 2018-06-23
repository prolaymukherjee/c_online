#include<stdio.h>

#include<math.h>
main()
{
    long int x,y,n,z,i=1;
    printf("enter no. of digits=");
    scanf("%d",&n);
    printf("x=");
    scanf("%d",&x);
    while(i<=n)
    {
       y=x/pow(10,i);
       z=y*pow(10,i);
       printf("%d\n",(x-z));
       i++;
    }
}
