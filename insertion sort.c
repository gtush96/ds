#include<stdio.h>
int main()
{
    int i,j,n,temp,a[80];
    printf("enter the size:\n");
    scanf("%d",&n);
    printf("enter the %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
            else
                {
                break;
                }
            j--;
        }
    }
    for(i=0;i<n;i++)
    {
       printf("%d",a[i]);
    }

}
