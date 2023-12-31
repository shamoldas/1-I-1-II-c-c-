#include<stdio.h>
#include<stdlib.h>
struct btnode
{
    int value;
    struct btnode *I;
    struct btnode *r;
};
typedef struct btnode bt;
bt *root;
bt *new,*list;
bt *create_node();
void display(bt*);
void construct_tree();
void dfs(bt*);
void main()
{
    construct_tree();
    display(root);
    printf("\n");
    printf("depth first traversal.\n");
    dfs(root);
}
bt* create_node()
{
    new=(bt*)malloc(sizeof(bt));
    new->I=NULL;
    new->r=NULL;
}
void construct_tree()
{
    root=create_node();
    root->value=50;
    root->I=create_node();
    root->I->value=20;
    root->r=create_node();
    root->r->value=30;
    root->I->I=create_node();
    root->I->I->value=70;
    root->I->r=create_node();
    root->I->r->value=80;
    root->I->r->r=create_node();
    root->I->r->r->value=60;
    root->I->I->I=create_node();
    root->I->I->I->value=10;
    root->I->I->r=create_node();
    root->I->I->r->value=40;
}
void display(bt *list)
{
    if(list==NULL)
    {
        return;
    }
    display(list->I);
    printf("->%d",list->value);
    display(list->r);
}
void dfs(bt *list)
{
    if(list==NULL)
    {
        return;
    }
    dfs(list->I);
    dfs(list->r);
    printf("->%d",list->value);
}
