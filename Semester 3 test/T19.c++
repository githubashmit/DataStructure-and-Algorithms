#include <iostream>
using namespace std;

class Number {
public:
    int num;
    Number(int n) {
        num = n;
    }
};

int main() {
    Number n1(5);
    Number n2 = n1;
    n2.num = 10;
    cout << n1.num << " " << n2.num << endl;
    return 0;
}