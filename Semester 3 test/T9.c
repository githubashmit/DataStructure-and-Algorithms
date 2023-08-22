/*6 
12 24 26 37 41 53
24
24.   25
6
12 24 24 37 41 53 
52
52 54 */

#include <stdio.h>

int findSmallestMissing(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;
    int smallestMissing = x + 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > x) {
            smallestMissing = arr[mid];
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return smallestMissing;
}

int main() {
    int n;
    scanf("%d", &n);

    int priorities[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &priorities[i]);
    }

    int x;
    scanf("%d", &x);

    int result = findSmallestMissing(priorities, n, x);
    printf("The smallest missing positive integer greater than %d is %d.\n", x, result);

    return 0;
}