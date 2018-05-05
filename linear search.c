#include<stdio.h>
void main()
{
    int a[30],i,n,s;
    printf("enter size of the list:\n");
    scanf("%d",&n);
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search:\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==a[i])
        {
            printf("element is found at index %d",i);
            break;
        }
    }
    if(i==n)
    {
        printf("element is not found:\n");
    }
}
