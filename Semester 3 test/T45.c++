#include <iostream>
using namespace std;

class MyClass {
public:
    int value;
    void printValue() {
        cout << this->value << endl;
    }
};

int main() {
    MyClass obj;
    obj.value = 10;
    obj.printValue();
    return 0;
}