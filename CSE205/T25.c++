#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int value):data(value), next(nullptr){}
};
void linkedlistTraversal(Node* ptr){
    while(ptr !=nullptr){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main(){
    Node* head=new Node(7);
    
    Node* second=new Node(7);
    Node* third=new Node(7);
    head->next=second;
    second->next=third;
    third->next = nullptr;
    linkedlistTraversal(head);
    return 0;

}