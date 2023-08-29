#include <iostream>
using namespace std;

class FriendClass;  

class MyClass {
public:
    int data;

public:
    friend void displayData(const MyClass& obj);  
};

void displayData(const MyClass& obj) {
    cout << "Data: " << obj.data << endl;
}

int main() {
    MyClass obj1, obj2;
    obj1.data = 60;
    obj2.data = 70;

    displayData(obj1);  
    displayData(obj2);  

    return 0;
}