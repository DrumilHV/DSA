#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node *insertNode(int data, Node *root)
{
    if (!root)
    {
        return createNode(data);
    }

    if (data < root->data)
    {
        insertNode(data, root->left);
    }
    else
    {
        insertNode(data, root->right);
    }
    return root;
}
int Height(Node *root, char D, int *opCount)
{
    int height = 0;
    Node *temp = root;
    if (D == 'l')
    {
        while (temp)
        {
            height++;
            temp = temp->left;
            opCount++;
        }
    }
    else
    {
        while (temp)
        {
            height++;
            temp = temp->right;
            opCount++;
        }
    }
    return height;
}
int totalNodes(Node *root, int *opCount)
{
    if (!root)
    {
        (*opCount)++;
        return 0;
    }
    // int rightHeight = Height(root,'r',opCount);
    // int leftHeight = Height(root, 'l',opCount);

    // if(rightHeight == leftHeight){
    //     return (1 << rightHeight) -1;
    // }
    (*opCount)++;

    return totalNodes(root->left, opCount) + totalNodes(root->right, opCount) + 1;
}

void preorder(Node *root){
    if(root){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    Node *root = createNode(33);
    char choise = 'y';
    int c = 0;
    int num;
    do
    {
        printf("1. insert\n2. search: \n3.find No of nodes: \n4. preorder: \nexit: \nchoise: ");
        scanf("%d", &c);
        if (c == 1)
        {
            printf("Enter the number: ");
            scanf("%d", &num);
            insertNode(num, root);
        }
        else if (c == 2)
        {
            printf("Enter the number: ");
            scanf("%d", &num);
        }
        else if (c == 3)
        {
            int opCount = 0;
            printf("the total Nodes are: %d \nopCount: %d",totalNodes(root,&opCount),opCount);
        }
        else if(c==4){
            preorder(root);
        }
        printf("continue? y/n: ");
        scanf("\n%c", &choise);
    } while (choise == 'y');
}
