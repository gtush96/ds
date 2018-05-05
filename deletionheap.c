#include<stdio.h>
  int n=0,z;
  int a[5],*b;
  int par,i,ptr;
  int last;
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
  void delet()
  {
      z=z+1;
      b[z]=a[1];
  int ptr=1;
  int left=2;
  int right=3;
  last=a[n];
      n=n-1;
      while(right<n)
      {
          if(last>a[left] && last> a[right])
          {
              a[ptr]=last;
              return;
          }
      }
      if(a[right]<a[left])
      {
          a[ptr]=a[left];
          ptr=left;
      }
      else
      {
          a[ptr]=a[right];
          ptr=right;
      }
     left=2*ptr;
     right=left+1;
     if(last==n && last<a[left])
     {
         a[ptr]=a[left];
         ptr=left;
     }
     a[ptr]=last;
  }
  void traverse()
  {
     for(i=1;i<=n;i++)
     {
         printf("%d \n",a[i]);
     }
  }
  void sort()
  {
      for(i=z;i<=1;i++)
     {
         printf("%d \n",b[i]);
     }
  }
  void main()
  {
      b=(int*)calloc(z,sizeof(int));
      insert(10);
      insert(9);
      insert(34);
      insert(12);

    delet();
      traverse();
      sort();


  }
