#include<stdio.h>

int n=0,a[5],i,ptr,par;
void insert(int v)
 {
  n=n+1;
  ptr=n;

  while(ptr>1)
  {
    par=ptr/2;
    if(v < a[par])
    {
     a[ptr]=v;
     return;
    }
     a[ptr]=a[par];
     ptr=par;
 }
      a[1]=v;
 }

 void traverse()
 {
     for(i=1;i<=n;i++)
     {
         printf("%d \n",a[i]);
     }
 }
 void main()
 {
     insert(30);
     insert(8);
     insert(20);
     insert(35);
     insert(18);

     traverse();
 }

