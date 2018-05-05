#include<stdio.h>
#include<conio.h>


struct node
{
    int data;
    struct node *next;
}*start,*nn,*loc;

void insert_beg(){
int n=4,i,v;

for(i=0;i<n;i++)
{
    scanf("%d",&v);
    nn= malloc(sizeof(struct node));
    nn->data=v;
    if(start==NULL)
    {
        start=nn;
        nn->next=NULL;
    }
    else
    {
        nn->next=start;
        start=nn;
    }
}
}
void traverse()
{
    loc=start;
    while(loc!=NULL)
    {
        printf("\t%d->%d",loc->data,loc->next);
        loc=loc->next;
    }
}
void del_beg()
{
if(start==NULL)
{
printf("\n List is empty\n");
}
else
{
loc=start;
start=loc->next;
printf("\n\t %d is deleted from list \t \n",loc->data);
free(loc);
}
}

int main()
{

    insert_beg();
    traverse();
    del_beg();
    traverse();
    return 0;
}
