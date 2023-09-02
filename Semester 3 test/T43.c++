#include <iostream>
int main(){
    int N = 4;
    int *ptr=&N;
    int* *ptr1=&ptr;
    std::cout<<* *ptr1;
    return 0;
}