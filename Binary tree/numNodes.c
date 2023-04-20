#include<stdio.h>
#include<stdlib.h>

typedef struct  tree
{
    int data;
    struct tree * left;
    struct tree * right;
}tree;

tree* create(){
    tree *root;
    int x;
    printf("enter data (-1 for exit)");
    scanf("%d",&x);
    if(x==-1)
        return NULL;
    root = (tree*)malloc(sizeof(tree));
    root->data = x;
    printf("enter data for left of %d ", root->data);
    root->left = create();
    printf("enter data for right of %d ", root->data);
    root->right = create();
    return root;

}   
int count = 0;

int CountNodes(tree *root){
    if(!root){
        count++;
        return 0;
    }
    count++;

    return 1+CountNodes(root->left)+CountNodes(root->right);
}

int main(){
    tree *root;
    root = create();
    printf("Total nodes: %d\ncount: %d",CountNodes(root),count);
}