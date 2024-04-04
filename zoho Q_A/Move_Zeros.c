/*******************************************************************************************************

                            given an integer array numbers move all o's to the end of it while maintaining the relative order of the non-zero element
                            example  
                            input : 01023 
                            output : 12300

********************************************************************************************************/

#include <stdio.h>

void moveZerosToEnd(int arr[], int n) {
    int count = 0; // Count of non-zero elements
  
    // Traverse the array. If element encountered is non-zero, then replace the element at index 'count' with this element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // here count is incremented
        }
    }
  
    // Now all non-zero elements have been shifted to front and 'count' is set as index of first 0.
    // Make all elements 0 from count to end.
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int numbers[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%1d", &numbers[i]); // Read one digit at a time
    }
  
    printf("Input: ");
    for (int i = 0; i < n; i++) {
        printf("%d", numbers[i]);
    }
  
    moveZerosToEnd(numbers, n);
  
    printf("\nOutput: ");
    for (int i = 0; i < n; i++) {
        printf("%d", numbers[i]);
    }
  
    return 0;
}


