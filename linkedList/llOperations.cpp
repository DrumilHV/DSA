#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    Node(){
        this->next = NULL;
    }
};

void insertHead(int data, Node * &head){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insetTail( int data,Node * &tail){
    Node* temp = new Node(data);
    temp->next = NULL;
    tail->next = temp;
    tail = temp;
}
void insetAtPos(int data, Node * &head,Node *&tail, int pos){
    if(pos==1){
        insertHead(data,head);
        // Node* temp = new Node(data);

        return;
    }

    int count = 1;
    Node * temp = head;
    while(count<pos-1){
        temp = temp->next;
        count++;
    }
    if(temp->next==NULL){
        insetTail(data,tail);
    }
    Node *newNode = new Node(data);
     newNode->next = temp->next;
    temp->next = newNode;
}

void print(Node* &head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main(){
    Node* n1 = new Node(10);
    Node * head = n1;
    Node * tail = n1;
    n1->next = NULL;
    insertHead(109,head);
    insertHead(199,head);
    insertHead(99,head);
    insetTail(1,tail);
    insetTail(11,tail);
    insertHead(899,head);
    insetTail(12,tail);
    insetTail(13,tail);
    insetAtPos(701,head,tail,1);
    insetAtPos(700,head,tail,2);
    insetAtPos(706,head,tail,6);
    insetAtPos(702,head,tail,13);
    print(head);
    return 0;
}