#include <iostream>

int* fun(){
    static int x = 5;
    return &x;
}

int main(){
    int* p = fun();
    std::cout << *p << std::endl;
    return 0;
}