#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int value):data(value),next(nullptr){}
};
void traversal(Node *ptr){
    while(ptr!=nullptr){
        cout<<"Element "<<ptr->data<<endl;
        ptr=ptr->next;
    }
};

int main(){
    Node* head= new Node(2);
    Node* second= new Node(2);
    Node* third= new Node(2);
    head->next= second;
    second->next=third;
    third->next=nullptr;
    traversal(head);
    return 0;
}