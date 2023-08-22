#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this ->data = data;
        this->next= NULL;
    }
};
void print(Node *head){
    while (head!=NULL ){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){
    Node n1(4);
    Node *head = &n1;
    Node n2(4);
    Node n3(9);
    Node n4(11);
    Node n5(13);
    n1.next=&n2;
    n2.next =&n3 ;
    n3.next=&n4;
    n4.next=&n5;
    print(head);
    return 0;
}