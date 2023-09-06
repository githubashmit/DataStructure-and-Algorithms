/* Input 1 :
6
1 2 3 4 5 6
2
Output 1 :
Original array: 1 2 3 4 5 6 
Updated array: 5 6 1 2 3 4 
Input 2 :
7
12 65 34 80 38 51 72
10
Output 2 :
Original array: 12 65 34 80 38 51 72 
Updated array: 38 51 72 12 65 34 80 
Input 3 :
5
8 -2 3 -4 6
4
Output 3 :
Original array: 8 -2 3 -4 6 
Updated array: -2 3 -4 6 8 
 */
#include <iostream>

int main() {
    const int MAX_SIZE = 100; // Maximum size of the array
    int arr[MAX_SIZE]; // Array to store the integers
    int size; // Actual size of the array
    int numPositions; // Number of positions to rotate

    // Read the size of the array from the user
    std::cin >> size;

    // Read the elements of the array from the user
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Display the original array
    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Prompt the user to enter the number of positions to rotate
    std::cin >> numPositions;

    // Perform the rotation
    numPositions %= size; // Adjust the number of positions if it is larger than the size
    while (numPositions > 0) {
        int temp = arr[size - 1]; // Store the last element

        // Shift the elements to the right
        for (int i = size - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = temp; // Place the stored last element at the beginning

        numPositions--;
    }

    // Display the updated array
    std::cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

