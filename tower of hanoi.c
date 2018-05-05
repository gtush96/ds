#include <stdio.h>
#include <stdlib.h>
void tower(int n, char a,char b,char c)
{
if(n==1)
    {

        printf("\nDisk %d moves from % c \t to %c \t ",n,a,c);
    }
else
    {
      tower(n-1,a,c,b);
        printf("\nDisk %d moves from % c \t to %c \t ",n,a,c);
        tower(n-1,b,a,c);    }
}
int main()
{
    tower(3,'A','B','C');
    return 0;
}
