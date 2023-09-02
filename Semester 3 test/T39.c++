#include <iostream>
void modifyWithPointer(int* ptr) {
    *ptr = 10;
}
void modifyWithReference(int& ref) {
    ref = 20;
}
int main() {
    int num = 5;
    std::cout << "Initial value: " << num << std::endl;
    int* ptr = &num;
    *ptr = 7;
    std::cout << "After modifying with pointer: " << num << std::endl;
    int& ref = num;
    ref = 9;
    std::cout << "After modifying with reference: " << num << std::endl;
    modifyWithPointer(&num);
    std::cout << "After modifying with pointer as argument: " << num << std::endl;

    modifyWithReference(num);
    std::cout << "After modifying with reference as argument: " << num;

    return 0;
}