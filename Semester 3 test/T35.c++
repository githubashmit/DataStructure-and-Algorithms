class Node {
public:
    int data;
    Node* next;
};

void printList(Node* head) {
    while (head != NULL) {
        print head->data; //prints the values
        head = head->next;
    }
}

main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    printList(head);
}