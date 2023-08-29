#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main() {
    int number1 = 54;
    int number2 = 24;
    int result = gcd(number1, number2);
    cout << result;
    return 0;
}