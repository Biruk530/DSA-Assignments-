#include <iostream>
using namespace std;

int ternarySearchRecursive(int arr[], int left, int right, int target) {
    if (right >= left) {
        // Find two mid points
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        
        // Check if target is at mid1 or mid2
        if (arr[mid1] == target) {
            return mid1;
        }
        if (arr[mid2] == target) {
            return mid2;
        }
        
        // Recursively search in appropriate range
        if (target < arr[mid1]) {
            return ternarySearchRecursive(arr, left, mid1 - 1, target);
        } else if (target > arr[mid2]) {
            return ternarySearchRecursive(arr, mid2 + 1, right, target);
        } else {
            return ternarySearchRecursive(arr, mid1 + 1, mid2 - 1, target);
        }
    }
    return -1;  // Target not found
}

int main() {
    int arr[] = {1, 4, 7, 10, 13, 18, 21, 25, 30};
    int target = 13;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = ternarySearchRecursive(arr, 0, n - 1, target);
    cout << "By using Iterative Ternary Search The target: "<<target<<"  Found at index " << result << endl;

    
    return 0;
}
