#include <iostream>
using namespace std;


int interpolationSearchRecursive(int arr[], int left, int right, int target) {
    if (left <= right && target >= arr[left] && target <= arr[right]) {
      
        int pos = left + ((target - arr[left]) * (right - left)) / (arr[right] - arr[left]);
        
      
        if (arr[pos] == target) {
            return pos;
        }
        
        
        if (arr[pos] < target) {
            return interpolationSearchRecursive(arr, pos + 1, right, target);
        } else {
            return interpolationSearchRecursive(arr, left, pos - 1, target);
        }
    }
    return -1;  // Target not found
}

int main() {
    int arr[] = {10, 12, 18, 25, 30, 35, 40, 45, 50};
    int target = 35;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int result = interpolationSearchRecursive(arr, 0, n - 1, target);
    cout << "Recursive Interpolation Search: Found at index " << result << endl;
    
    return 0;
}
