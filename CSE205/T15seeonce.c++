/* Problem Statement



You are developing a program for a data processing company. The company deals with large sets of data consisting of strings. However, due to data collection methods, there may be duplicate strings in the data sets. Your task is to develop a program that removes duplicate strings from an array of strings.



Write a program that takes user input for the size of the array and the strings in the array. After removing duplicate strings, the program should display the updated array.

Input format :
The first line of input consists of an integer that represents the size of the array.

The next 'size' lines consist of the strings in the array, each on a new line.

Output format :
The program outputs a single line displaying the updated array of strings after removing duplicates.

Code constraints :
The size of the array should be a positive integer.

Each string in the array should not exceed 100 characters.

String comparison is case-sensitive.

Sample test cases :
Input 1 :
5
apple
banana
orange
banana
grape
Output 1 :
Updated array: apple banana orange grape 
Input 2 :
8
Grapes
Grapes
Grapes
Grapes
Banana
Banana
Guava
Guava
Output 2 :
Updated array: Grapes Banana Guava 
 */

#include <iostream>
#include <string>
using namespace std;

void removeDuplicates(string arr[], int& size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // Shift elements to fill the gap
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--; // Decrease the size of the array
                j--;    // Adjust the index to recheck the current position
            }
        }
    }
}

int main() {
    const int MAX_SIZE = 100;
    string arr[MAX_SIZE];
    int size;

    // Input the size of the array
    cin >> size;

    // Input the strings in the array
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Call the function to remove duplicates
    removeDuplicates(arr, size);

    // Display the updated array
    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}