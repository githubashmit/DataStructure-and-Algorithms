#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << "Element: " << current->data << std::endl;
            current = current->next;
        }
    }
};

int main() {
    LinkedList list;

    for (int i = 1; i <= 5; ++i) {
        list.insert(i * 10);
    }

    list.display();

    return 0;
}
