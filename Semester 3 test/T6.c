/* You are developing a software tool for generating permutations of a given sequence. The tool takes an array of integers representing a permutation and generates the next lexicographically greater permutation. Your task is to implement the nextPermutation function, which finds the next permutation of the given array.

Write a program that takes the size of the array, followed by the elements of the array, and outputs the next permutation

Input format:

The first line contains an integer N representing the size of the anay

The second line contains N space-separated integers representing the

elements of the array

Output format:

The output is a single line containing the next permutation of the array. The elements are space-separated

Code constraints:
The size of the array is between 1 and 100. The elements of the array are unique integers.

Sample test cases:

Input 1:

4

Output 1:

1234

1243 */
#include <stdio.h>
#include <stdlib.h>

void nextPermutation(int arr[], int n) {
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }
    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i]) {
            j--;
        }
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int k = i + 1, l = n - 1; k < l; k++, l--) {
        int temp = arr[k];
        arr[k] = arr[l];
        arr[l] = temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    nextPermutation(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}