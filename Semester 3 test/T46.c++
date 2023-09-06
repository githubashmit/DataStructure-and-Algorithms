#include <iostream>
class Matrix {
private:
    static const int ROWS = 2;
    static const int COLS = 3;
    int arr[ROWS][COLS];
public:
    void initialize() {
        for (int i = 0; i < ROWS; ++i) {
            for (int j = 0; j < COLS; ++j) {
                arr[i][j] = i + j;
            }
        }
    }
    void printElement(int row, int col) {
        std::cout << arr[row][col] << std::endl;
    }
};
int main() {
    Matrix m;
    m.initialize();
    m.printElement(1, 2);
    return 0;
}