#include <iostream>
using namespace std;

class MyClass {
    friend void printMessageLoop(MyClass& obj, int count);
    int data;

public:
    int getData() {
        return data;
    }
};

void printMessageLoop(MyClass& obj, int count) {
    for (int i = 0; i < count; ++i) {
        cout << "Hello from friend function!" << endl;
    }
}

int main() {
    MyClass obj;
    int loopCount = 3;

    printMessageLoop(obj, loopCount);

    return 0;
}