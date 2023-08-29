#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    
    Node(int value) : data(value), next(nullptr) {}
};

class CircularLinkedList {
private:
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = newNode;
            head->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void deleteFirst() {
        if (!head) {
            std::cout << "List is empty, cannot delete.\n";
            return;
        }
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        if (temp == head) {
            delete head;
            head = nullptr;
        } else {
            temp->next = head->next;
            delete head;
            head = temp->next;
        }
    }

    void deleteLast() {
        if (!head) {
            std::cout << "List is empty, cannot delete.\n";
            return;
        }
        Node* temp = head;
        Node* prev = nullptr;
        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == head) {
            delete head;
            head = nullptr;
        } else {
            prev->next = head;
            delete temp;
        }
    }

    void display() {
        if (!head) {
            std::cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        do {
            std::cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        std::cout << "\n";
    }

    ~CircularLinkedList() {
        if (!head) return;
        Node* temp = head;
        while (temp->next != head) {
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        delete temp; // Delete the last node
    }
};

int main() {
    CircularLinkedList list;

    list.insert(4);
    list.insert(3);
    list.insert(2);
    list.insert(1);

    std::cout << "Original List: ";
    list.display();

    list.deleteFirst();
    std::cout << "List after deleting first node: ";
    list.display();

    list.deleteLast();
    std::cout << "List after deleting last node: ";
    list.display();

    list.insert(5);
    std::cout << "List after adding 5 at the beginning: ";
    list.display();

    return 0;
}
