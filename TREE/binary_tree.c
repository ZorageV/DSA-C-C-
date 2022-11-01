#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node*right;
};
struct node *create_node(int data)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *insert_left(struct node* root, int data)
{
    root->left=create_node(data);
} 
struct node* inseet_right(struct node* root, int data)
{
    root->right=create_node(data);
    return root->right;
}
void preorder(struct node* root)
{
    if(root==NULL)
    {
        return ;
    }
    printf("%d->",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d->",root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d->",root->data);   
}
int main()
{
    struct node* root=create_node(1);
    inseet_right(root,3);
    insert_left(root,2);
    inseet_right(root->left,4);
    insert_left(root->right,5);
    printf("preorder:\n");
    preorder(root);
    printf("\n");
    printf("inorder:\n");
    inorder(root);
    printf("\n");
    printf("postorder:\n");
    postorder(root);
    
}