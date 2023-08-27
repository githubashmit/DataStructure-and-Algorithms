#include <iostream>
using namespace std;

class MyClass {
public:
    void myFunction();
};

void MyClass::myFunction() {
    cout << "This is a non-inline member function";
}

int main() {
    MyClass obj;
    obj.myFunction();
    return 0;
}