#include <iostream>
#include <queue>
#include<bits/stdc++.h>
using namespace std;
// Binary Tree Node Structure
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val)  {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to insert a node in the binary tree
void insertNode(Node* root, std::string path, int value) {
    Node* curr = root;
    for (char direction : path) {
        if (direction == 'L') {
            if (curr->left == nullptr) {
                curr->left = new Node(value);
            }
            curr = curr->left;
        } else if (direction == 'R') {
            if (curr->right == nullptr) {
                curr->right = new Node(value);
            }
            curr = curr->right;
        }
    }
}

// Depth-First Search (DFS) Traversal
void dfsTraversal(Node* node) {
    if (node == nullptr) {
        return;
    }

    std::cout << node->data << " ";
    dfsTraversal(node->left);
    dfsTraversal(node->right);
}

// Calculate the sum of magic parents
// int sumOfMagicParents(Node* node,Node *root) {

//     if (node == NULL) {
//         return 0;
//     }
//     int leftSum = sumOfMagicParents(node->left, root);
//     int rightSum = sumOfMagicParents(node->right, root);

//     cout<<" node   "<<node->data<<"   left sum , right sum "<<leftSum<<"  "<<rightSum<<endl;

//     if( (node->left == NULL || node->right==NULL) ){
//         // return node->left->data + node->right->data;
//         return node->data;
//     }

//     if ((leftSum % 2 == 0 && rightSum % 2 != 0) || (leftSum % 2 != 0 && rightSum % 2 == 0) || (node->left->data%2==0 && node->right->data%2!=0)||(node->left->data%2!=0 && node->right->data%2==0)) {

//         cout<<"leftsum: "<<leftSum<<" rightSum: "<<rightSum<<" data: "<<node->data<<" sum : "<<leftSum+rightSum+node->data<<endl;
//         // return leftSum + rightSum + node->data;
//         return  node->data;
//     }
//     // if( (node==root) && (root->left->data%2==0 && root->right->data%2!=0)||(root->left->data%2!=0 && root->right->data%2==0)){
//     //     return node->data;
//     // }
//     return leftSum + rightSum  ;
// }
int sumOfMagicParents(Node* node, Node* root) {
  if (node == nullptr) {
    return 0;
  }

  int leftSum = sumOfMagicParents(node->left, root);
  int rightSum = sumOfMagicParents(node->right, root);

  // Check if the node is a magic parent
  bool isMagicParent = (leftSum % 2 == 0) && (rightSum % 2 == 1);
  if (isMagicParent) {
    return node->data + leftSum + rightSum;
  } else {
    return leftSum + rightSum;
  }
}



int main() {
    // Node* root = (Node*)malloc(sizeof(Node));
    Node* root = new Node(11);
    
    insertNode(root, "L", 23);
    insertNode(root, "R", 44);
    insertNode(root, "LL", 13);
    insertNode(root, "LR", 9);
    insertNode(root, "RL", 22);
    insertNode(root, "RR", 7);
    insertNode(root, "RLL", 6);
    insertNode(root, "RLR", 15);

    std::cout << "DFS Traversal: ";
    dfsTraversal(root);
    std::cout << std::endl;

    int totalMagicParentsSum = sumOfMagicParents(root, root);
    // printf("THis is print statemt");
    std::cout << "\n\n\nSum of Magic Parents: " << totalMagicParentsSum << std::endl;

    return 0;
}