#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p1, **p2;
    p1 = &a;
    p2 = &p1;
    cout << **p2 << endl;
    return 0;
}