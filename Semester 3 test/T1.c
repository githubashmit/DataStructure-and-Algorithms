/* Insert Character in Array

Default (GPT-3.5)

User
Imagine you are developing a text editor application, and you need to implement a feature that allows users to insert a new character at a specified position in an array of characters.

Write a program that takes input from the user, including the size of the array, the characters for the array, the position for insertion, and the character to be inserted. The program should shift the elements of the array to make space for the new character and insert it at the specified position.

Finally, the program should display the updated array after the insertion.

Input format:

The first line contains an integer representing the size of the array. The second line contains the characters for the array, separated by spaces.The second line contains the characters for the array, separated by spaces. The third line contains an integer representing the position for insertion. The fourth line contains a single character representing the character to be Inserted.

Output format:

The output should display the updated string after the insertion, separated by spaces.


Input 1:

5

a b c d e

2

X

Output 1:

Updated array after insertion: a b X c d e */


#include <stdio.h>
#include <string.h>

void insertCharacter(char array[], int size, int position, char character) {
    // Shift elements to make space for the new character
    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the character at the specified position
    array[position] = character;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    char array[size];
    printf("Enter the characters for the array separated by spaces: ");
    for (int i = 0; i < size; i++) {
        scanf(" %c", &array[i]);
    }

    int position;
    printf("Enter the position for insertion: ");
    scanf("%d", &position);

    char character;
    printf("Enter the character to be inserted: ");
    scanf(" %c", &character);

    // Insert character at specified position
    insertCharacter(array, size, position, character);

    // Display the updated array
    printf("Updated array after insertion: ");
    for (int i = 0; i <= size; i++) {
        printf("%c ", array[i]);
    }

    return 0;
}