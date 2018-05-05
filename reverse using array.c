#include<stdio.h>
#include<conio.h>

void main()
{
 int n,a[100],i;
 printf("enter the no of digits in your number: ");
 scanf("%d",&n);

 printf("enter no.");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 printf("reverse no is:");
 for(i=n-1;i>=0;i--)
  scanf("%d",&a[i]);
}
