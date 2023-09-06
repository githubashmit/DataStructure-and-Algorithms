#include <iostream>

// Define a Node structure
struct Node {
    int data;
    Node* next;
            Node(int val) : data(val), next(nullptr) {}
};

// Define a LinkedList class
class LinkedList {
public:
    Node* head;
    LinkedList() : head(nullptr) {}

    // Function to append a new node to the end of the list
    void append(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
};

// Function to separate even and odd numbers into two different linked lists
void separateEvenOdd(LinkedList& inputList, LinkedList& evenList, LinkedList& oddList) {
    Node* current = inputList.head;
    while (current) {
        if (current->data % 2 == 0) {
            evenList.append(current->data);
        } else {
            oddList.append(current->data);
        }
        current = current->next;
    }
}

int main() {
    int n; // Number of nodes
    std::cout << "Enter the number of nodes: ";
    std::cin >> n;

    LinkedList sampleList;
    for (int i = 1; i <= n; ++i) {
        sampleList.append(i);
    }

    LinkedList evenNumbers;
    LinkedList oddNumbers;

    // Separate even and odd numbers
    separateEvenOdd(sampleList, evenNumbers, oddNumbers);

    // Print even numbers
    Node* current = evenNumbers.head;
    std::cout << "Even Numbers: ";
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;

    // Print odd numbers
    current = oddNumbers.head;
    std::cout << "Odd Numbers: ";
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;

    return 0;
}
