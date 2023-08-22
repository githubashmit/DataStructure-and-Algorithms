/* 



User
Merge Arrays: Unique Combinations

Default (GPT-3.5)

User
[18/08, 00:25] Ashmit: You have two arrays containing strings. Merge the arrays in such a way that the resulting array contains all the unique combinations of strings from both arrays. Each combination should be represented as a single string in the merged array.

Note: This is a sample question asked in Capgemini recruitment.

Input format:

The size of the first array (sizel) as an integer. The elements of the first array (arrl) as strings, separated by space.

The size of the second array (size2) as an integer.
[18/08, 00:25] Ashmit: The elements of the second array (arr2) as strings, separated by space.
 Input 1:

3

87 908 548

3

45 73 852
OUTPUT 1:
8745 8773 87852 90845 90873 908852 54873 548852 
Write code in  c language
[18-08-2023 00:30] Ashmit:*/
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main() {
    int size1, size2;
    scanf("%d", &size1);
    
    char arr1[size1][20];
    for (int i = 0; i < size1; i++) {
        scanf("%s", arr1[i]);
    }
    
    scanf("%d", &size2);
    char arr2[size2][20];
    for (int i = 0; i < size2; i++) {
        scanf("%s", arr2[i]);
    }

    // Initialize an array to store the merged combinations
    char merged_combinations[100][40];
    int count = 0;

    // Iterate through each element in the first array
    for (int i = 0; i < size1; i++) {
        // Iterate through each element in the second array
        for (int j = 0; j < size2; j++) {
            // Create a combination of the two elements and add it to the merged_combinations array
            strcpy(merged_combinations[count], strcat(arr1[i], arr2[j]));
            count++;
        }
    }

    // Print the merged combinations
    for (int i = 0; i < count; i++) {
        printf("%s ", merged_combinations[i]);
    }
    
    return 0;
}