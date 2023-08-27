#include <iostream>

inline int countEvenNumbers(int num) {
    int square = num * num;
    int count = 0;
    
    while (square > 0) {
        int digit = square % 10;
        if (digit % 2 == 0) {
            count++;
        }
        square /= 10;
    }
    
    return count;
}

int main() {
    int N;
    std::cin >> N;
    
    int result = countEvenNumbers(N);
    std::cout << result << std::endl;
    
    return 0;
}