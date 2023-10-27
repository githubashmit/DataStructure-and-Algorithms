#include<iostream>
struct Node{
    int data;
    Node* next;
};
int main(){
    Node* head = new Node;
    Node* second= new Node;
    Node* third =new Node;

    head->data= 7;
    head-> next = second;
    second ->data= 11;
    second-> next = third;
    third->data = 68;
    third-> next = nullptr;
    return 0;
}