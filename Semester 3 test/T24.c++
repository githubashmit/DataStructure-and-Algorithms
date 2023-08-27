#include <iostream>
using namespace std;
class Color {
public:
    enum ColorEnum {
        Black,
        Blue,
        Red
    };
};

int main() {
    Color::ColorEnum obj;
    cout << sizeof(obj) << endl;
    return 0;
}