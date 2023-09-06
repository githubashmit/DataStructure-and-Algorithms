//Create single linked list for n nodes and delete ulternate node in the list(node contain string type data).
//Create double linked list for n node every node contain multiple field of data. Find a node item in the list according to item id.
#include <iostream>
#include <string>
using namespace std;
struct Node{
    string data;
    Node* nextptr;

}*stnode;
void create(int n){
    Node* front ;
    Node* tmp;
    if(n==0){
        stnode=nullptr;
        return;
    }
    string data;
    cin>>data;
    stnode= new Node();
    stnode->data = data;
    stnode->nextptr = nullptr;
    tmp = stnode;
    for(int i=2; i<=n; i++){
        cin>>data;
        front= new Node();
        front->data = data;
        front ->nextptr = nullptr;
        tmp->nextptr = front;
        tmp=tmp->nextptr;

    }
}
void display(){
    if(stnode == nullptr){
        cout<<"List is empty";
    }else{
        Node* tmp = stnode;
        while(tmp != nullptr){
            cout<<tmp->data<<" ";
            tmp = tmp->nextptr;
        }
    }
}
void alternatedelete(Node* stnode){
    if(stnode == nullptr){
        return;
    }
    Node* prev=stnode;
    Node* alt_node=stnode->nextptr;
    while(prev!=nullptr && alt_node!= nullptr)
    {
        prev-> nextptr=alt_node->nextptr;
        delete alt_node;
        prev=prev ->nextptr;
        if(prev!= nullptr){
            alt_node=prev->nextptr;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    create(n);
    if(stnode == nullptr){
        cout<<"List is empty";
    }else{
        cout<<"Linked List data: ";
        display();
        cout<<"\nAfter deleting alternate node:";
        alternatedelete(stnode);
        display();
    }
    return 0;
}