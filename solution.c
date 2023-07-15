#include <stdio.h>

int minOperations(int arr[], int n) {
    int minOps = 0;
    
    int maxFreq = 0;
    int freq[100001] = {0}; // Frequency array to count occurrences of each element
    
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++; // Count occurrences of each element
        if (freq[arr[i]] > maxFreq) {
            maxFreq = freq[arr[i]]; // Update max frequency
        }
    }
    
    minOps = n - maxFreq; // Minimum operations = Total elements - Max frequency
    
    return minOps;
}

int main() {
    int numTestCases;
    scanf("%d", &numTestCases);
    
    while (numTestCases > 0) {
        int n;
        scanf("%d", &n);
        
        int arr[100001];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        int result = minOperations(arr, n);
        printf("%d\n", result);
        
        numTestCases--;
    }
    
    return 0;
}
