#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    Node(int value):data(value),next(nullptr){}
};
void traversal(Node * ptr){
    while(ptr!=nullptr){
    cout<<"Element "<<ptr->data<<endl;
    ptr=ptr->next;
    }
}
Node * insertAtbegin(Node * head , int data){
    Node * ptr =new Node(data);
    ptr->next = head;
    return ptr;
}
int main(){
    Node * head=new Node(9);
    Node * second=new Node(9);
    Node * third=new Node(9);
    head->next=second;
    second->next=third;
    third->next=nullptr;
    traversal(head);
    head= insertAtbegin(head, 56);
    traversal(head);
    return 0;
}