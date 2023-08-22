#include <stdio.h>
#include <stdlib.h>

// Helper function for sorting based on width
int compare(const void* a, const void* b) {
    int* envelope1 = (int*)a;
    int* envelope2 = (int*)b;
    return envelope1[0] - envelope2[0];
}

int maxEnvelopes(int envelopes[][2], int n) {
    if (n <= 1) {
        return n;
    }

    // Sort envelopes by width in ascending order
    qsort(envelopes, n, sizeof(envelopes[0]), compare);

    int dp[n];
    int maxCount = 1;

    // Dynamic Programming to find the longest increasing subsequence of heights
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (envelopes[i][1] > envelopes[j][1]) {
                dp[i] = dp[i] > dp[j] + 1 ? dp[i] : dp[j] + 1;
            }
        }
        maxCount = maxCount > dp[i] ? maxCount : dp[i];
    }

    return maxCount;
}

int main() {
    int n;
    scanf("%d", &n);

    int envelopes[n][2];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &envelopes[i][0], &envelopes[i][1]);
    }

    int result = maxEnvelopes(envelopes, n);
    printf("%d\n", result);

    return 0;
}
