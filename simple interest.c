#include<stdio.h>

void main()
{
 int amount,rate,time,ans;
 printf("\nenter principal of amount: ");
 scanf("%d",&amount);

 printf("\nenter rate of interest");
 scanf("%d",&rate);

 printf("\nenter period of time");
 scanf("%d",&time);

 ans=(amount*rate*time)/100;
 printf("ans:%d",ans);
}
