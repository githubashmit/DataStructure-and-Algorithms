#include <iostream>

int sum(int x, int y) {
    return x + y;
}

int main() {
    int result = sum(3, 4) + 2;
    std::cout << "result: " << result << std::endl;
    return 0;
}