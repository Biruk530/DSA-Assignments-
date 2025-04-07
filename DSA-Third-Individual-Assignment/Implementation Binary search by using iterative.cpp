#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)

            return mid; //if it is found

        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; //if it is not found
}

int main() {
    int arr[] = {2, 4, 7, 10, 13, 18, 21, 25, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 13;

    int resultIter = binarySearchIterative(arr, n, target);
    if (resultIter != -1)
        cout << "Iterative: Found at index " << resultIter << endl;
    else
        cout << "Iterative: Not found" << endl;

}
