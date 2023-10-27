#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int value): data(value), next(nullptr){}
};
int main(){
    Node* head = new Node(7);
    Node* second = new Node(13);
    Node* third = new Node(20);

    head->next= second;
    second->next = third;
    cout<<"First Node:"<<head->data<<endl;
    cout<<"second Node:"<<second->data<<endl;
    cout<<"Third Node:"<<third->data<<endl;
    return 0;

}