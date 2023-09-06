#include <stdio.h>

int main() {
    int size, index;
    char newChar;
    
    // Input size of the array
    scanf("%d", &size);
    
    // Declare an array to store characters
    char array[size + 1]; // +1 for the null terminator
    
    // Input characters for the array
    for (int i = 0; i < size; i++) {
        scanf(" %c", &array[i]); // Note the space before %c to skip whitespace
    }
    
    // Input index for insertion
    scanf("%d", &index);
    
    // Input character to be inserted
    scanf(" %c", &newChar);
    
    // Shift elements to make space for the new character
    for (int i = size; i > index; i--) {
        array[i] = array[i - 1];
    }
    
    // Insert the new character at the specified index
    array[index] = newChar;
    
    // Display the updated array
    printf("Updated array after insertion: ");
    for (int i = 0; i <= size; i++) {
        printf("%c ", array[i]);
    }
    
    return 0;
}