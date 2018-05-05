#include<stdio.h>
struct node
{
  int data;
  struct node *left,*right;
}*root=NULL,*temp=NULL;
void create(int v)
{
    temp=(struct node*)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    temp->data=v;
    if(root==NULL)
    {
        root=temp;
        return;
    }
    else
    {
        search(root);
    }
}
    void search(struct node*root)
    {
        if(temp->data>root->data && root->right!=NULL)
        {
            search(root->right);
        }
        else if(temp->data>root->data && root->right==NULL)
        {
            root->right=temp;
        }
        else if(temp->data<root->data && root->left!=NULL)
        {
            search(root->left);
        }
        else if(temp->data<root->data && root->left==NULL)
        {
            root->left=temp;
        }
    }
void inorder(struct node *root)
{
    if (root != NULL)
    {
           inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
    return;
}
}
void pre(struct node *root)
{
    if (root != NULL)
    {
    printf("\n%d\t",root->data);
    pre(root->left);
    pre(root->right);
    return;
}
}
void main()
{
    create(1);
    create(0);
    create(3);
   // search(2 );
    inorder(root);
    pre(root);
}
