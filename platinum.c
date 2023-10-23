#include <stdio.h>

// Function to reverse an array of integers
void reverseArray(int arr[], int length) {
    int start = 0;
    int end = length - 1;
    
    // Swap elements from start and end of the array
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        // Move the indices towards the center
        start++;
        end--;
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5}; // Sample array
    int length = sizeof(numbers) / sizeof(numbers[0]); // Calculate array length

    printf("Original Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]); // Output: 1 2 3 4 5
    }
    
    // Call the function to reverse the array
    reverseArray(numbers, length);
    
    printf("\nReversed Array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", numbers[i]); // Output: 5 4 3 2 1
    }
    
    printf("\n");
    return 0;
}