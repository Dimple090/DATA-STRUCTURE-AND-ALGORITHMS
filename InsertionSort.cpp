#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int curr = arr[i];   // Pick current element
        int prev = i - 1;    // Previous index

        // 🔹 Dry Run Explanation:
        // Iteration i = 1 → curr = 1, prev = 0
        // Compare arr[0] (4) > curr (1) → shift arr[0] → [4,4,5,2,3]
        // Insert curr at arr[0] → [1,4,5,2,3]

        // Iteration i = 2 → curr = 5, prev = 1
        // Compare arr[1] (4) > curr (5)? No → Place curr → [1,4,5,2,3]

        // Iteration i = 3 → curr = 2, prev = 2
        // Compare arr[2] (5) > 2 → shift → [1,4,5,5,3]
        // Compare arr[1] (4) > 2 → shift → [1,4,4,5,3]
        // Compare arr[0] (1) > 2? No → Insert curr at arr[1] → [1,2,4,5,3]

        // Iteration i = 4 → curr = 3, prev = 3
        // Compare arr[3] (5) > 3 → shift → [1,2,4,5,5]
        // Compare arr[2] (4) > 3 → shift → [1,2,4,4,5]
        // Compare arr[1] (2) > 3? No → Insert curr at arr[2] → [1,2,3,4,5]

        while(prev >= 0 && arr[prev] > curr) {//if we want desc order we use < sign
            arr[prev + 1] = arr[prev];  // shift element right
            prev--;
        }
        arr[prev + 1] = curr;  // place curr in correct position
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
