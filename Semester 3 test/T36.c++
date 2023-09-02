#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;

    Node(string val) {
        data = val;
        next = nullptr;
    }
};

class Document {
public:
    Node* head;
    Node* tail;

    Document() {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtBeginning(string value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    void appendToEnd(string value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void displayDocument() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Document document;

    for (int i = 0; i < n; ++i) {
        string value;
        cin >> value;
        document.insertAtBeginning(value);
    }

    string newValue;
    cin >> newValue;
    document.appendToEnd(newValue);

    cout << "Document: ";
    document.displayDocument();

    cout << "Updated Document: ";
    document.displayDocument();

    return 0;
}
