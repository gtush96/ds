#include<stdio.h>
#define SIZE 100
 int arr[SIZE];
 int top=-1,i=0;

 void push(int value)
 {
   if(top>SIZE)
   {
     printf("overflow\n");
    }
   else if(top==-1)
   {
    top=0;
	arr[top]=value;
	top++;
   }
   else
    {
   arr[top]=value;
   top++;
   }
 }
 void pop()
 {
     top--;
     printf("\n");
 }
   void traverse()
   {
   for(i=0;i<top;i++)
{
    printf("%d\n",arr[i]);
}
}
	int main()
	{
	 push(8);
	 push(9);
	 push(10);
	 traverse();
	 pop();
	 pop();
	 traverse();
	}
