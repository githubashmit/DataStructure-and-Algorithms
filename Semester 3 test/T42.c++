#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

void printList(Node* head) {
    while (head != NULL) {
        print( head->data); //prints the values
        head = head->next;
    }
}

main() {
    Node* head = new Node();
    head->data = 5;
    head->next = new Node();
    head->next->data = 10;
    head->next->next = NULL;
    printList(head);
}